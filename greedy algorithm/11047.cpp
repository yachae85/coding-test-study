#include <cstdio>

int main()
{
	int N, K;
	
	scanf("%d%d", &N, &K);

	int arr[11];


	for (int i = 1; i <= N; i++)
		scanf("%d", &arr[i]);

	int count = 0;

	for (int i = N; i >= 1; i--)
	{
		if (K  >= arr[i])
		{
			count += K / arr[i];
			K %= arr[i];
		}

		if (K == 0)
			break;
	}

	printf("%d\n", count);

	return 0;
}