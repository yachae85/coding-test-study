#include <cstdio>
#include <cstring>

using namespace std;

int N;
int arr[100][100];
int visit[100][100];
int maxcount;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void dfs(int nodey, int nodex, int height)
{
	visit[nodey][nodex] = 1;

	for (int i = 0; i < 4; i++)
	{
		int tempx = nodex + dx[i];
		int tempy = nodey + dy[i];

		if (tempx >= 0 && tempy >= 0 && tempx < N && tempy < N)
			if (arr[tempy][tempx] > height&& visit[tempy][tempx] == 0)
			{
				dfs(tempy, tempx, height);
			}
	}
}

int main() {

	scanf("%d", &N);

	int maxheight = 1;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			int temp;
			scanf("%d", &temp);
			arr[i][j] = temp;
			if (temp > maxheight)
				maxheight = temp;
		}

	int maxcount = 1;
	int height = 0;

	while (height < maxheight)
	{
		memset(visit, 0, sizeof(visit));

		int count = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (arr[i][j] > height&& visit[i][j] == 0)
				{
					count++;
					dfs(i, j, height);
				}
			}
		}

		if (count > maxcount)
			maxcount = count;

		height++;
	}

	printf("%d\n", maxcount);

	return 0;
}