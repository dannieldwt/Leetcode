# Solution

**Approach 1**
```java
class Solution {
    public int maxSubArray(int[] nums) {
        if (nums.length == 0 || nums == null)
            return 0;
        int sum = 0;
        int maxSum = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; ++i)
        {
            if (nums[i] > sum + nums[i])
                sum = nums[i];
            else
                sum += nums[i];
            if (sum > maxSum)
                maxSum = sum;
        }
        return maxSum;
    }
}
```




