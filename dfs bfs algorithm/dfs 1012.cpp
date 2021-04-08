#include <cstdio>
#include <cstring>

int T;
int M;
int N;
int K;

int arr[50][50] = {0};
int visit[50][50] = {0};

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int bug_num;

void dfs(int nodey, int nodex) {
	
	visit[nodey][nodex] = 1;

	for (int i = 0; i < 4; i++)
	{
		int tempx = nodex + dx[i];
		int tempy = nodey + dy[i];

		if (tempx >= 0 && tempx < M && tempy >= 0 && tempy < N)
		{
			if (arr[tempy][tempx] == 1 && visit[tempy][tempx] == 0)
			{
				dfs(tempy, tempx);
			}
		}
	}
}

int main() {

	scanf("%d", &T);
	
	for(int t = 0; t < T; t++)
	{
		memset(arr, 0, sizeof(arr));
		memset(visit, 0, sizeof(visit));

		scanf("%d%d%d", &M, &N, &K);

		for (int i = 0; i < K; i++)
		{
			int x, y;
			scanf("%d%d", &x, &y);
			arr[y][x] = 1;
		}

		bug_num = 0;

		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < M; x++)
				if (arr[y][x] == 1 && visit[y][x] == 0)
				{
					dfs(y, x);
					bug_num++;
				}
		}

		printf("%d\n", bug_num);

	}
	return 0;
}

/*
여러번 테스트케이스를 돌리는 문제에서 초기화를 잊지말자
memset은 cstring에 있다
*/