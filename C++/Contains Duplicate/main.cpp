#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool containsDuplicate(vector<int> &nums);

int main()
{
	vector<int> nums = {1, 2, 3, 1};
	bool result = containsDuplicate(nums);
	cout << result;
	return 0;
}

bool containsDuplicate(vector<int> &nums)
{
	map<int, int> count;
	for (auto x: nums)
	{
		count[x]++;
		if (count[x] == 2)
			return true;
	}
	return false;
}