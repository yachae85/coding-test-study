#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int N;
	int arr[1000];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + N);

	/*int result;
	if (arr[0] != 1)
		result = 1;
	else {
		int save = 1;
		for (int i = 1; i < N; i++)
		{
			if (save + 1 < arr[i])
			{
				result = save + 1;
				break;
			}
			else
				save += arr[i];
			if (i == N - 1)
				result = save + 1;
		}
	}*/

	
	//���� �� ������ �ڵ�
	int result = 0;
	for(int i = 0; i < N; i++)
	{
		if(result + 1 < arr[i])
		{
			break;
		}
		else
			result += arr[i];
	}
	result++;
	

	printf("%d\n", result);

	return 0;
}

/*
������ �� ���� ������ Ǯ����
�Ŀ� ���۸��� ��� ���� : https://algosu.tistory.com/11 �Ǵ� https://real-012.tistory.com/129
-> ���ݱ��� ���Ѽ��� 1, 2, 3, 4�� ���� �� ���� �� �������� 6�̶�� (1 ~ 4) + 6 = (7 ~ 10) �̶� 5�� ���� �� ���� (6�� ������ 6������ ����)
���� ���ݱ��� ���� �� �ִ� �ִ� ���� + 1���� ���� �����߰� ũ�ٸ� ���� �� ���� ���Դ� �ִ빫�� + 1 �� �� ���̴�.

*/