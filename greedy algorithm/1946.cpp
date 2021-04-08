#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int N;
		scanf("%d", &N);

		vector<pair<int, int>> a(N);

		for (int j = 0; j < N; j++)
		{
			scanf("%d%d", &a[j].first, &a[j].second);
		}

		sort(a.begin(), a.end());
		
		int pre = a[0].second;
		int count = 1;

		for (int j = 1; j < N; j++)
		{
			if (a[j].second < pre)
			{
				pre = a[j].second;
				count++;
			}
		}

		printf("%d\n", count);
	}

	return 0;
}