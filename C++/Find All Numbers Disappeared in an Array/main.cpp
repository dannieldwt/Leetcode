#include <iostream>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums);

int main()
{
	return 0;
}

vector<int> findDisappearedNumbers(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		int idx = abs(nums[i]) - 1;
		nums[i] = nums[idx] > 0 ? -nums[idx] : nums[idx];
	}
	vector<int> res;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] > 0)
			res.push_back(i + 1);
	}
	return res;
}