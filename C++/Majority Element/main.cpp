#include <iostream>
#include <map>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums);

int main()
{
	vector<int> nums = {1, 2, 3, 4, 5, 1, 1, 1, 1};
	for (auto it = nums.begin(); it != nums.end(); ++it)
		cout << *it << endl;
	int number = majorityElement(nums);
	cout << number;
	
	return 0;
}
	
int majorityElement(vector<int> &nums)
{
	map<int, int> count;
	for (int i = 0; i < nums.size(); ++i)
	{
		count[nums[i]]++;
		if (count[nums[i]] > (nums.size() / 2))
			return nums[i];
	}
}
