#include <cstdio>
#include <cstring>
#include <cstdlib>

char arr[50];
char oper[50];
int num[50] = { 0, };

int main() {

	scanf("%s", arr);

	int op_cnt = 0;
	int num_cnt = 0;
	int temp = 0;

	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == '+' || arr[i] == '-')
		{
			oper[op_cnt] = arr[i];
			op_cnt++;
			num[num_cnt] = temp;
			temp = 0;
			num_cnt++;
		}
		else {
			if (temp != 0)
				temp *= 10;
			temp += arr[i] - '0';
		}

		if (i == strlen(arr) - 1)
		{
			num[num_cnt] = temp;
			temp = 0;
			num_cnt++;
		}
	}

	int sum = 0;
	int check = 0;
	int cnt = 0;

	for (int i = 0; i < num_cnt; i++)
	{
		if (i == 0)
			sum += num[i];
		else
		{
			if (check == 0)
			{
				if (oper[cnt] == '-')
				{
					check = 1;
					temp += num[i];
					cnt++;
				}
				else
				{
					sum += num[i];
					cnt++;
				}
			}
			else
			{
				if (oper[cnt] == '-')
				{
					sum -= temp;
					temp = 0;
					temp += num[i];
					cnt++;
				}
				else
				{
					temp += num[i];
					cnt++;
				}
			}
		}
	}

	sum -= temp;

	printf("%d\n", sum);

	return 0;
}

//문자열 파싱이 제일 힘들었던 문제 좀 더 효율적인 파싱이 있을것 같다.