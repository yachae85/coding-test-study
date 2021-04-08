#include <cstdio>

int main() {

	int N;
	char str[50];

	scanf("%d", &N);
	scanf("%s", str);

	int holder = N + 1;
	int cuple = 0;

	for (int i = 0; i < N; i++)
	{
		if (str[i] == 'L')
		{
			cuple++;
			i++;
		}
	}

	int max;

	if (cuple == 0)
		max = N;
	else
		max = holder - cuple;

	printf("%d\n", max);



	return 0;
}