#include <cstdio>

int main() {

	int L, P, V;
	int caseNum = 1;

	while (1)
	{
		scanf("%d %d %d", &L, &P, &V);
		if (L == 0 && P == 0 && V == 0)
			break;

		int quotient = V / P;
		int remainder = V % P;
		int maxDay;

		if (remainder >= L) {
			maxDay = (quotient + 1) * L;
		}
		else {
			maxDay = quotient * L + remainder;
		}

		printf("Case %d: %d\n", caseNum, maxDay);
		caseNum++;
	}

	return 0;
}

// 문제 이해하는게 제일 힘들었던 문제 이해만 하면 쉽다