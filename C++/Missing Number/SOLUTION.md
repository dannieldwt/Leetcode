# SOLUTION

**方法一 -- 位运算法**

利用异或来获取其中缺失的元素，主要利用同样数异或为零，任何一个数异或零不改变原来的值两个性质进行处理

```C++
class Solution {
public:
    int missingNumber(vector<int>& nums) {
		int num = nums.size();
	for (int i = 0; i < nums.size(); ++i)
	{
		num ^= nums[i];
		num ^= i;
	}
	return num;
    }
};
```