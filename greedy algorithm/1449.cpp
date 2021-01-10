#include <cstdio>
#include <algorithm>

int N;
int L;
int arr[1000];

int main() {

	scanf("%d %d", &N, &L);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	std::sort(arr, arr + N);

	int start = -1;
	int cnt = 0;

	for (int i = 0; i < N; i++)
	{
		if (start == -1)
		{
			start = arr[i];
			continue;
		}

		if (arr[i] - start + 1 <= L)
			continue;
		else
		{
			cnt++;
			start = arr[i];
		}
	}

	cnt++;

	printf("%d\n", cnt);

	return 0;
}

//ó������ �������ڸ��� 10�оȿ� Ǯ���� ����. ������� ������ �׷��� ��������.