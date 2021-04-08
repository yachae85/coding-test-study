#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int arr[10000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + n, greater<>());
	
	/*if(arr[0] <= 0)
		sort(arr, arr + 10000);

	int result = 0;

	for (int i = 0; i < n; i++)
	{
		if (i + 1 < n)
		{
			if (arr[i + 1] > 0 || arr[i] <= 0 && arr[i + 1] <= 0)
			{
				result += arr[i] * arr[i + 1];
				i++;
			}
			else
				result += arr[i];
		}
		else
		{
			result += arr[i];
		}
	}

	printf("%d\n", result);*/

	int result = 0;
	int left = 0;
	int right = n - 1;

	for (; left < n - 1; left += 2)
	{
		if (arr[left] > 1 && arr[left + 1] > 1)
		{
			result += arr[left] * arr[left + 1];
		}
		else
			break;
	}

	for (; right > 0; right -= 2)
	{
		if (arr[right] < 1 && arr[right - 1] < 1)
		{
			result += arr[right] * arr[right - 1];
		}
		else
			break;
	}

	for (; right >= left; right--)
		result += arr[right];

	printf("%d\n", result);
}

/*
참고 https://mygumi.tistory.com/220
1은 곱하는거보다 더하는게 최대값이 나온다
*/