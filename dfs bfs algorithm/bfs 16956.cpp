#include <cstdio>
#include <queue>

int R;
int C;
char arr[501][501];

int main() {

	scanf("%d%d", &R, &C);

	for (int i = 0; i < R; i++)
	{
		scanf("%s", arr[i]);
	}

	int check = 1;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (arr[i][j] == 'S')
			{
				if (i > 0 && arr[i - 1][j] == '.')
				{
					arr[i - 1][j] = 'D';
				}
				else if (i > 0 && arr[i - 1][j] == 'W')
				{
					check = 0;
					break;
				}

				if (i < R - 1 && arr[i + 1][j] == '.')
				{
					arr[i + 1][j] = 'D';
				}
				else if (i < R - 1 && arr[i + 1][j] == 'W')
				{
					check = 0;
					break;
				}

				if (j > 0 && arr[i][j - 1] == '.')
				{
					arr[i][j - 1] = 'D';
				}
				else if (j > 0 && arr[i][j - 1] == 'W')
				{
					check = 0;
					break;
				}

				if (j < C - 1 && arr[i][j + 1] == '.')
				{
					arr[i][j + 1] = 'D';
				}
				else if (j < C - 1 && arr[i][j + 1] == 'W')
				{
					check = 0;
					break;
				}
			}
		}
	}


	printf("%d\n", check);
	if (check == 1)
	{
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
				printf("%c", arr[i][j]);
			printf("\n");
		}
	}
	return 0;
}
