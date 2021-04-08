#include <cstdio>
#include <algorithm>
#include <queue>

/*using namespace std;

int N;
int arr[100000];


int calculation(int n, int i, int save)
{
	if (i == n - 1)
	{
		return save + arr[i];
	}
	else
	{
		return save + arr[i] + calculation(n, i + 1, save + arr[i]);
	}
}

int main() {

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + N);

	int cal[100000];
	int count = 0;
	int result = 0;

	if (N > 1)
	{
		result = arr[0] + arr[1];
		if (N != 2)
		{
			result = result + calculation(N, 2, result);
		}
	}

	printf("%d\n", result);

	return 0;
}*/

using namespace std;

int main() {

	priority_queue<int, vector<int>, greater<int>> q;

	int N;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		q.push(temp);
	}

	int result = 0;

	if (N > 1)
	{
		result = q.top();
		q.pop();
		result += q.top();
		q.pop();
		q.push(result);
		if (N > 2)
		{
			for (int i = 2; i < N; i++)
			{
				int temp1 = q.top();
				q.pop();
				int temp2 = q.top();
				q.pop();

				q.push(temp1 + temp2);

				
				result += (temp1 + temp2);
			}
		}
	}

	printf("%d\n", result);
	return 0;
}

//stl 공부를 더 열심히 하자