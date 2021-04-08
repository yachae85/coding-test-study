#include <queue>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int R;
int C;
char arr[101][101];

int main() {
	
	scanf("%d%d", &R, &C);

	for (int i = 0; i < R; i++)
	{
		scanf("%s", arr[i]);
	}

	int count = 0;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (arr[i][j] == '#')
			{
				count++;
				arr[i][j] == '.';

				/*if (i > 0 && arr[i - 1][j] == '#')
				{
					arr[i - 1][j] = '.';
				}*/
				if (i < R - 1 && arr[i + 1][j] == '#')
				{
					arr[i + 1][j] = '.';
				}
				/*if (j > 0 && arr[i][j - 1] == '#')
				{
					arr[i][j - 1] = '.';
				}*/
				if (j < C - 1 && arr[i][j + 1] == '#')
				{
					arr[i][j + 1] = '.';
				}
			}
		}
	}

	printf("%d\n", count);

	return 0;
}