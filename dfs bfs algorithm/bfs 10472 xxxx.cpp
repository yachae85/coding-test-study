#include <cstdio>
#include <queue>

using namespace std;

int P;
int dx[5] = { -1, 1, 0, 0, 0 };
int dy[5] = { 0, 0, 0, -1, 1 };

char fin[3][3] = { {'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'} };

int bfs(char arr[3][3], int x, int y, int count)
{
	count++;

	queue <pair<int, int>> q;

	for (int i = 0; i < 5; i++)
	{
		int tempx = x + dx[i];
		int tempy = y + dy[i];
		if (tempx >= 0 && tempx < 3 && tempy >= 0 && tempy < 3)
		{
			if (arr[tempx][tempy] == '*')
				arr[tempx][tempy] = '.';
			else if (arr[tempx][tempy] == '.')
			{
				arr[tempx][tempy] = '*';
				q.push(make_pair(tempx, tempy));
			}
		}
	}

	int check = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] != '.')
			{
				check = 0;
				break;
			}
		}
	}
	if (check)
		return count;
	else
	{
		int tempmin = 9999;
		while (!q.empty())
		{
			int xx = q.front().first;
			int yy = q.front().second;

			q.pop();
			int temp = bfs(arr, xx, yy, count);
			if (temp < tempmin)
			{
				tempmin = temp;
				count = tempmin;
			}
		}
		return count;
	}

	return count;
}

bool checkarr(char arr1[3][3], char arr2[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (arr1[i][j] != arr2[i][j])
				return false;
	}
	return true;
}

int main() {

	scanf("%d", &P);

	for (int a = 0; a < P; a++)
	{
		char arr[3][3];

		for (int i = 0; i < 3; i++)
			scanf("%s", arr[i]);

		int min = 9999;
		queue <pair<int, int>> q;

		bool check = checkarr(fin, arr);

		if (check)
			printf("0\n");
		else
		{
			for (int i = 0; i < 3; i++)
				for (int j = 0; j < 3; j++)
					q.push(make_pair(i, j));

			while (!q.empty())
			{
				int count = 0;
				int x = q.front().first;
				int y = q.front().second;

				count = bfs(arr, x, y, 0);

				if (count < min)
					min = count;

				q.pop();
			}

			printf("%d\n", min);
		}
	}

	return 0;
}

/* 열심히 고민했지만 못풀었다*/