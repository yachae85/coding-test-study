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

	
	//조금 더 간단한 코드
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
증명을 할 수는 없지만 풀었다
후에 구글링한 결과 증명 : https://algosu.tistory.com/11 또는 https://real-012.tistory.com/129
-> 지금까지 구한수가 1, 2, 3, 4를 만들 수 있을 때 다음수가 6이라면 (1 ~ 4) + 6 = (7 ~ 10) 이라서 5는 만들 수 없다 (6은 무게추 6때문에 가능)
따라서 지금까지 만들 수 있는 최대 무게 + 1보다 다음 무게추가 크다면 만들 수 없는 무게는 최대무게 + 1 이 될 것이다.

*/