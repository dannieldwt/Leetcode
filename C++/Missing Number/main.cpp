#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums);

int main()
{
	vector<int> nums = {3, 0 , 1};
	cout << missingNumber(nums) << endl;
	return 0;
}

int missingNumber(vector<int> &nums)
{
	/*
	int sum = 0;
	for (auto x: nums)
		sum += x;
	int standard = (0 + nums.size()) * (nums.size() + 1) / 2;
	return standard - sum;
	*/
	int num = nums.size();
	for (int i = 0; i < nums.size(); ++i)
	{
		num ^= nums[i];
		num ^= i;
	}
	return num;
}