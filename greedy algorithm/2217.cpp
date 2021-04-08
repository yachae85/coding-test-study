#include <cstdio>
#include <algorithm>

int N;
int arr[100000];

void quick_sort(int start, int end);

int main() {
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr + N);

	int weight = 0;

	for (int i = 0; i < N; i++)
	{
		if (weight < arr[i] * (N - i))
			weight = arr[i] * (N - i);
	}

	printf("%d\n", weight);
}

//문제 이해는 빨랐지만 정렬하는데 상당히 오래 걸렸던 문제, algorithm 헤더에 sort 함수가 있는지 몰랐다.