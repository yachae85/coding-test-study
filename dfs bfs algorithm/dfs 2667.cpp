#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;
char arr[25][25];
int visit[25][25];

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

vector <int> v;

void dfs(int nodey, int nodex)
{
	v.back()++;
	visit[nodey][nodex] = 1;

	for (int i = 0; i < 4; i++)
	{
		int tempx = nodex + dx[i];
		int tempy = nodey + dy[i];

		if (tempx >= 0 && tempx < 25 && tempy >= 0 && tempy < 25)
		{
			if (visit[tempy][tempx] == 0 && arr[tempy][tempx] == '1')
			{
				dfs(tempy, tempx);
			}
		}
	}
}

int main() {

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", arr[i]);
	}

	int complex_num = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visit[i][j] == 0 && arr[i][j] == '1')
			{
				complex_num++;
				v.push_back(0);
				dfs(i, j);
			}
		}
	}

	sort(v.begin(), v.end());

	printf("%d\n", complex_num);

	for (int i = 0; i < v.size(); i++)
	{
		printf("%d\n", v[i]);
	}

	return 0;
}
