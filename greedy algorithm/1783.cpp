#include <cstdio>

int main() {

	int N, M;
	scanf("%d%d", &N, &M);

	int count;


	if (N >= 3) {
		if (M < 5) {
			count = M;
		}
		else if (M - 2 < 5) {
			count = (M - 1);
			if (count > 4)
				count = 4;
		}
		else {
			count = (M - 2);
		}
	}
	else {
		if (N == 1)
			count = 1;
		else {
			count = (M - 1) / 2 + 1;

			if (count > 4)
				count = 4;
		}
	}
	
	printf("%d\n", count);

	return 0;
} /*
  Ǯ�̿� ����ϰ� �����ϰ� Ǯ������ N�� 1�϶��� �̵� Ƚ���� 4ȸ �̻��� ��� �̵� ����� ���� �� �� �̻� �̿��ؾ� �Ѵٴ� ������ ����� �������� ���ߴ�.
  Ǯ�� :



���ΰ� 1�̰ų� 2�̰ų� �ƴϸ� 3���� ũ�ų� ���� ���� ����� ���� ����.



���ΰ� 1ĭ�̶�� ��� �������ε� �̵��� �� ������ 1ĭ�̴�.



���ΰ� 2ĭ�̶�� 2,3 ���� ���Ͽ� (M-1)/2 ĭ + 1 (ó����ġ) ��ŭ ���ƴٴ� �� ������  �̵� Ƚ���� 4�� �̻��� ��쿡�� ���� �̵� ����� 



���� �� �� �̻� �̿��ؾ� �Ѵ�. ��� ���ǿ� ���Ͽ� �ִ� 3 + 1ĭ�ۿ� �� �� ����.



���ΰ� 3ĭ�̶�� ���ΰ� 7ĭ �̻��� ���� 1,2,3,4�� ��� ������ų ���� ����ĭ�� 7ĭ�� �Ǿ�� �ϹǷ� (1+2+2+1), 2,3�� �ѹ��� ���ְ� �������� 1�� 4�� ä��� �ִ��� ĭ�� ���� �� �ִ�.



���� ���ΰ� 7ĭ �̸��̶�� 1�� 4�� ���� ( M-1 )+ 1��ŭ ä�� �� ������ �̵� ��� ���ǿ� ���Ͽ� ���� �ִ� 3 + 1ĭ �ۿ� �� �� ����.
*/