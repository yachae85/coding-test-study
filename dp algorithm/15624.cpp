#include <cstdio>
#include <vector>

using namespace std;

int N;
int ans;

vector <int> v(1000000);

int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (v[n] != 0)
		return v[n];

	return v[n] = (fib(n - 1) + fib(n - 2)) % 1000000007;
}

int main() {

	scanf("%d", &N);

	ans = fib(N);

	printf("%d\n", ans);

	return 0;

}