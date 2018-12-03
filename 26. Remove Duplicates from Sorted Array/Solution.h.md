# Solution.h

```java
class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0)   return 0;
        int length = 0;
        for (int i = 1; i < nums.length; ++i)
        {
            if (nums[i] != nums[i - 1])
                ++length;
            nums[length] = nums[i];
        }
        return length + 1;
    }
}
```






