#include <cstdio>
#include <cstring>

int main() {

	char str[1000];

	scanf("%[^\n]", str);

	int length = strlen(str);
	int arr[4] = { 0, };
	int cur = 0;

	for (int i = 0; i < length; i++)
	{
		if (cur == 0 && str[i] == 'U')
		{
			arr[0] = 1;
			cur++;
		}
		if (cur == 1 && str[i] == 'C')
		{
			arr[1] = 1;
			cur++;
		}
		if (cur == 2 && str[i] == 'P')
		{
			arr[2] = 1;
			cur++;
		}
		if (cur == 3 && str[i] == 'C')
		{
			arr[3] = 1;
			cur++;
		}
	}

	if (cur == 4)
		printf("I love UCPC\n");
	else
		printf("I hate UCPC\n");

	return 0;
}

//공백을 포함한 문자열 입력 받을때 %[^\n] 기억하기