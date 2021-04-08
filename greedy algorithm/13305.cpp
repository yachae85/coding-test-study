#include <cstdio>

int N;
long long length[100000];
long long price[100000];

int main() {

	scanf("%d", &N);
	for (int i = 0; i < N - 1; i++)
	{
		scanf("%d", &length[i]);
	}

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &price[i]);
	}

	long long sum = 0;
	long long dup = 0;
	int cur = 0;

	while (1)
	{
		dup += length[cur];

		for (int i = cur + 1; i < N; i++)
		{

			if (i == N - 1)
			{
				sum += dup * price[cur];
				cur = i;
			}
			else {
				if (price[cur] > price[i])
				{
					sum += dup * price[cur];
					cur = i;
					dup = 0;
					break;
				}
				else {
					dup += length[i];
				}
			}
		}

		if (cur == N - 1)
			break;
	}

	printf("%ld\n", sum);

	return 0;
}