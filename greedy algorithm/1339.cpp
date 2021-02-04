#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int n;
vector<string> str;
int alp[26];

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		str.push_back(s);
	}

	for (int i = 0; i < str.size(); i++)
	{
		int pow = 1;
		for (int j = str[i].size() - 1; j >= 0; j--)
		{
			int index = str[i][j] - 'A';
			alp[index] += pow;
			pow *= 10;
		}
	}

	sort(alp, alp + 26, greater<>());
	
	int result = 0;
	int num = 9;

	for (int i = 0; i < 26; i++, num--)
	{
		if (alp[i] == 0)
			break;
		else
			result += alp[i] * num;
	}

	printf("%d\n", result);

	return 0;
}

/*
Âü°í https://imnotabear.tistory.com/85
*/