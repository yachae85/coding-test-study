#include <cstdio>

using namespace std;

int main()
{
	int left, right, center, count;
	count = 0;

	while (scanf("%d%d%d", &left, &center, &right) == 3)
	{
		while (1)
		{
			int diffa, diffb;
			diffa = center - left;
			diffb = right - center;

			if (diffa != 1 || diffb != 1)
			{
				if (diffa >= diffb)
				{
					right = center - 1;
					int temp;
					temp = center;
					center = right;
					right = temp;
				}
				else
				{
					left = center + 1;
					int temp;
					temp = center;
					center = left;
					left = temp;
				}
				count++;
			}
			else
				break;
		}
		printf("%d\n", count);
		count = 0;
	}
	
}