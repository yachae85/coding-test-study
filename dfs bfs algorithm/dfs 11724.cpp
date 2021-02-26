#include <cstdio>

int N;
int M;
int arr[1001][1001];
int visit[1001];
int count;

void dfs(int node)
{
	visit[node] = 1;

	for (int i = 1; i <= N; i++)
	{
		if (visit[i] == 0 && arr[node][i] == 1)
			dfs(i);
	}
}

int main() {

	scanf("%d%d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		int temp1;
		int temp2;
		scanf("%d%d", &temp1, &temp2);

		arr[temp1][temp2] = 1;
		arr[temp2][temp1] = 1;
	}

	count = 0;

	for (int i = 1; i <= N; i++)
	{
		if (visit[i] == 0)
		{
			count++;
			dfs(i);
		}
	}

	printf("%d\n", count);

	return 0;
}