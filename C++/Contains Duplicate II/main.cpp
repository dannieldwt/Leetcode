#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k);

int main()
{
	vector<int> nums = {1, 2, 3, 1};
	cout << containsNearbyDuplicate(nums, 3);
	return 0;
}

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
	map<int, int> num_idx;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (num_idx.find(nums[i]) == num_idx.end())
		{
			num_idx[nums[i]] = i;
			continue;
		}
		int prev = num_idx[nums[i]];
		int dist = i - prev;
		num_idx[nums[i]] = i;
		if (dist <= k)
			return true;
	}
	return false;
}