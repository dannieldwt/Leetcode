#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k);

int main()
{
	vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
	rotate(nums, 3);
	for (auto x: nums)
		cout << x <<endl;
	return 0;
}

void rotate(vector<int>& nums, int k)
{
	int len = nums.size();
	k = k % len;
	int count = 0;
	for (int start = 0; count < len; ++start)
	{
		int current = start;
		int prev = nums[start];
		do
		{
			int next = (current + k) % len;
			int temp = nums[next];
			nums[next] = prev;
			prev = temp;
			current = next;
			count++;
		}while (start != current);
	}
}
	