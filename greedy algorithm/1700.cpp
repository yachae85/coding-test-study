#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N;
int K;

int main()
{
	scanf("%d %d", &N, &K);
	vector <int> plug(N);
	queue <int> use;

	for (int i = 0; i < K; i++)
	{
		int temp;
		scanf("%d", &temp);
		use.push(temp);
	}

	int count = 0;
	int ind = 0;

	while (!use.empty())
	{
		if (plug.size() != N)
		{
			plug.push_back(use.front());
			use.pop();
		}
		else
		{
			int temp = use.front();
			
			vector<int>::iterator iter;
			iter = find(plug.begin(), plug.end(), temp);
			
			//값이 존재하지 않을때
			if (iter == plug.end())
			{
				vector <int> tempv(K - ind - 1);
				for (int i = 0; i < K - ind - 1; i++)
				{

				}
			}
			//값이 존재할때
			else
			{
				use.pop();
			}
		}
		ind++;
	}

	printf("%d\n", count);
}