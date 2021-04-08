/*
bfs 알고리즘
#include <cstdio>
#include <queue>

using namespace std;

int N;
int P;
int arr[101][101];
int inf[101];

int main() {

	scanf("%d%d", &N, &P);

	for (int i = 0; i < P; i++)
	{
		int temp1;
		int temp2;
		scanf("%d%d", &temp1, &temp2);
		arr[temp1][temp2] = 1;
		arr[temp2][temp1] = 1;
	}

	queue <int> q;

	q.push(1);
	inf[1] = 1;

	int count = 0;

	while (!q.empty())
	{
		int temp = q.front();

		for (int i = 1; i <= N; i++)
		{
			if (arr[temp][i] == 1)
			{
				if (inf[i] != 1)
				{
					inf[i] = 1;
					q.push(i);
					count++;
				}
			}
		}
		q.pop();
	}

	printf("%d\n", count);

	return 0;
}
*/

#include <cstdio>

using namespace std;

int N;
int P;
int arr[101][101] = {0};
int count;
int visit[101] = {0};

void dfs(int node) {

	/*
	if (visit[node] == 1)
		return;
	*/
	count++;
	visit[node] = 1;

	for (int i = 1; i <= N; i++)
	{
		if (arr[node][i] == 1 && visit[i] == 0)
		{
			dfs(i);
		}
	}
}

int main() {

	scanf("%d%d", &N, &P);

	for (int i = 0; i < P; i++)
	{
		int temp1;
		int temp2;
		scanf("%d%d", &temp1, &temp2);
		arr[temp1][temp2] = 1;
		arr[temp2][temp1] = 1;
	}

	count = 0;
	/*
	visit[1] = 1;

	for (int i = 1; i <= P; i++)
	{
		if (arr[1][i] == 1)
		{
			dfs(i);
		}
	}
	*/
	dfs(1);

	printf("%d\n", count);

	return 0;
}

//dfs 참고 : https://code-kh-studio.tistory.com/30 왜 내껀 안되는건지 모르겠다