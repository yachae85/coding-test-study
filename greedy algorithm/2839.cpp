#include <cstdio>

int main() {

	int N;

	scanf("%d", &N);

	int max3 = N / 3;
	int count = 99999;

	for (int i = 0; i <= max3; i++)
	{
		int temp = N;
		temp -= 3 * i;
		int tmp = temp / 5;
		temp %= 5;

		if (temp == 0)
		{
			if (count > tmp + i)
				count = tmp + i;
		}
	}

	if (count != 99999)
		printf("%d\n", count);
	else
		printf("-1\n");

	return 0;
}

/*
1) 5kg �� ������ �������� ���� �� �ִٸ� (�Է� ���� 5�� �����������ٸ�) �Է°��� 5�� ���� ���� ����ϰ� ���α׷� ����
2) 5kg �� ������ �������� ���� �� ���ٸ� 3kg ������ �� �� ��� (���� ī��Ʈ�� 1 ����, �Է°��� 3 ����)
3) ���� �Է°��� 0���� �۾����� -1�� ����ϰ� ���α׷� ����
�̷��� Ǯ���� �ִ�.
*/