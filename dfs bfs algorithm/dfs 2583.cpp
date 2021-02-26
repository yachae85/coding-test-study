#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int M;
int N;
int K;

int arr[100][100];
int visit[100][100];

int d[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

vector <int> v;

void dfs(int nodey, int nodex)
{
	v.back()++;

	visit[nodey][nodex] = 1;

	for (int i = 0; i < 4; i++)
	{
		int tempx = nodex + d[i][0];
		int tempy = nodey + d[i][1];

		if(tempx >=0 && tempy >= 0 && tempx < N && tempy <M )
			if (arr[tempy][tempx] == 0 && visit[tempy][tempx] == 0)
			{
				dfs(tempy, tempx);
			}
	}
}

int main() {

	scanf("%d%d%d", &M, &N, &K);


	for (int i = 0; i < K; i++)
	{
		int lx;
		int ly;
		int rx;
		int ry;

		scanf("%d%d%d%d", &lx, &ly, &rx, &ry);

		for (int j = ly; j < ry; j++)
		{
			for (int k = lx; k < rx; k++)
			{
				arr[j][k]++;
			}
		}
	}

	int count = 0;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] == 0 && visit[i][j] == 0)
			{
				count++;
				v.push_back(0);
				dfs(i, j);
			}
		}
	}

	sort(v.begin(), v.end());

	printf("%d\n", count);

	for (int i = 0; i < v.size(); i++)
	{
		printf("%d", v[i]);
		if (i != v.size() - 1)
			printf(" ");
		else
			printf("\n");
	}

	return 0;
}