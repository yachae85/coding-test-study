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

//���� ���ش� �������� �����ϴµ� ����� ���� �ɷȴ� ����, algorithm ����� sort �Լ��� �ִ��� ������.