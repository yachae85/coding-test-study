#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

/*int N;
int K;
vector <pair<int, int>> jewel;
int bag[300000];
priority_queue<int> pq;

int main() {

	scanf("%d%d", &N, &K);
	
	for (int i = 0; i < N; i++)
	{
		int temp1;
		int temp2;
		scanf("%d %d", &temp1, &temp2);
		jewel.push_back(make_pair(temp1, temp2));
	}

	for (int i = 0; i < K; i++)
	{
		scanf("%d", &bag[i]);
	}

	sort(jewel.begin(), jewel.end());
	sort(bag, bag + K, greater<>());

	//여기부터 참고
	long long result = 0;

	int idx = 0;

	for (int i = 0; i < K; i++)
	{
		while (idx < N && jewel[idx].first <= bag[i])
			pq.push(jewel[idx++].second);
		
		if (!pq.empty())
		{
			result += pq.top();
			pq.pop();
		}
	}

	printf("%ld\n", result);

	return 0;
}

/*
도저히 생각을 못하겠다
참고 https://jaimemin.tistory.com/760
*/

int main() {

	int N, K;

	return 0;
}