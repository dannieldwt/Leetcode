# Solution

**approach 1**
```java
class Solution {
    public int searchInsert(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
}
```

**approach 2**
```java
class Solution {
    public int searchInsert(int[] nums, int target) {
        if(nums.length == 0||nums[0]>target) return 0;
        for (int i = 0; i < nums.length; i++){
            if (nums[i] == target) return i;
            if(nums[i]>target) return i;
        }
        return nums.length;
    }
}
```





