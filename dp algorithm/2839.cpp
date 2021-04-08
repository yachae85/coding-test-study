#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

int arr[5001];

int main() {
	int n;
	scanf("%d", &n);

	memset(arr, 9999, sizeof(arr));
	arr[3] = arr[5] = 1;

	for (int i = 6; i <= n; i++)
	{
		arr[i] = min(arr[i - 3], arr[i - 5]) + 1;
	}

	if (arr[n] >= 9999)
		printf("-1\n");
	else
		printf("%d\n", arr[n]);
	return 0;
}

// √‚√≥ : http://wookje.dance/2017/03/14/boj-2839-%EC%84%A4%ED%83%95%EB%B0%B0%EB%8B%AC/