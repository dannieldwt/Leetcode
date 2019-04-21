# SOLUTION

**方法一 -- Cyclic Replacements**

首先根据题目想到了循环队列，也是一个环状rotate的感觉，于是自然而然地想到了利用
取余模拟旋转的操作，那么获得了可以迅速找到所对应位置的方法。
如果采用两个数组，那么只要将对应位置计算出来并放置在另一个数组中即可。
而进一步，根据题目要求考虑原地处理，空间复杂度为o（1）。于是就考虑只利用一个变量来缓存，代替之前一个数组的作用。
于是自然考虑到缓存每一步的那个被替换的，不断处理下去。这样一来冒出了几个问题，终止这个过程的条件是什么？
这种循环处理一定能覆盖所有情况吗？特殊的，如果k为数组长度怎么办呢？

观察答案，首先终止过程的条件即是达到k次循环，或者说把所有元素都移动了一次。
首先，如果把数组按k个为一组进行划分，那么数组的每个元素要么是k内的idx或者是idx加上x倍k
于是总是可以覆盖所有情况，并且只要进行k次，就可以覆盖所有元素。k中每一次把不超过数组长度的idx + x * k
的这些数处理一遍，即每次处理n/k， 那么k次就为n个。 当k为数组长度时，其实不过是每次就处理一个。

C++代码实现如下：

```C++
class Solution {
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
}
```