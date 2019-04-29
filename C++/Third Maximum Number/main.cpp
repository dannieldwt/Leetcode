#include <iostream>
#include <vector>
using namespace std;

int thirdMax(vector<int>& nums);

int main()
{
	return 0;
}

int thirdMax(vector<int> &nums)
{
	long long a, b, c;
	a = b = c = LLONG_MIN;
	for (auto x: nums)
	{
		if (a == x || b == x || c== x)
			continue;
		if (a < x)
		{
			c = b;
			b = a;
			a = x;
		}
		else if (b < x)
		{
			c = b;
			b = x;
		}
		else
		{
			c = x;
		}
	}
	return c == LLONG_MIN ? a : c;
}
			