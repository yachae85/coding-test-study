#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].second >> a[i].first;
	}

	sort(a.begin(), a.end());

	/*int starttime = a[0].first;
	int endtime = a[0].second;
	int count = 1;
	for (int i = 1; i <= n; i++)
	{
		if (a[i].first != starttime)
		{
			if (a[i].first >= endtime)
			{
				starttime = a[i].first;
				endtime = a[0].second;
				count++;
			}
		}
	}
	
	printf("%d", count);*/
	int savetime = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (savetime <= a[i].second) {
			savetime = a[i].first;
			ans++;
		}
	}
	printf("%d", ans);

	return 0;
}

//vector등 c++ 기본 자료 구조에 대한 공부가 더 필요하다
//출처 : https://blog.naver.com/PostView.nhn?blogId=namjs1540&logNo=221579863363&parentCategoryNo=&categoryNo=7&viewDate=&isShowPopularPosts=true&from=search








	/*int savetime = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (savetime <= a[i].second) {
			savetime = a[i].first;
			ans++;
		}
	}
	printf("%d", ans);*/