#include <cstdio>

int main()
{
	int num;
	scanf("%d", &num);
	num = 1000 - num;

	int count = 0;

	for (int i = 0; i < 6; i++)
	{
		switch (i)
		{
		case 0:
			count += num / 500;
			num %= 500;
			break;
		case 1:
			count += num / 100;
			num %= 100;
			break;
		case 2:
			count += num / 50;
			num %= 50;
			break;
		case 3:
			count += num / 10;
			num %= 10;
			break;
		case 4:
			count += num / 5;
			num %= 5;
			break;
		case 5:
			count += num / 1;
			num %= 1;
			break;
		}
	}

	printf("%d\n", count);
}

// ������ �׼��� �迭�� ������ �� �� ����ϰ� ���� �� �ִ�.