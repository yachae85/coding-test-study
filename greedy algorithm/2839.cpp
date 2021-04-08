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
1) 5kg 에 설탕을 빠짐없이 담을 수 있다면 (입력 값이 5로 나눠떨어진다면) 입력값을 5로 나눈 몫을 출력하고 프로그램 종료
2) 5kg 에 설탕을 빠짐없이 담을 수 없다면 3kg 봉지에 한 번 담기 (봉지 카운트는 1 증가, 입력값은 3 감소)
3) 만약 입력값이 0보다 작아지면 -1을 출력하고 프로그램 종료
이렇게 풀수도 있다.
*/