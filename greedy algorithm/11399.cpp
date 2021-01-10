#include <cstdio>
#include <algorithm>

int N;
int arr[1000];

int main() {

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	std::sort(arr, arr + N);

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		for (int j = 0; j <= i; j++)
		{
			temp += arr[j];
		}
		sum += temp;
	}

	printf("%d\n", sum);

	return 0;
}

//cpu 스케쥴링에서 SJF랑 비슷한것같다.