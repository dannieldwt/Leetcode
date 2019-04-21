# SOLUTION

**方法一**
```java
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        if (numbers.length == 0)
            return new int[]{};
        int i = 0, j = numbers.length - 1;
        while (i < j)
        {
            if (numbers[i] + numbers[j] < target)
                ++i;
            else if (numbers[i] + numbers[j] > target)
                --j;
            else
                return new int[]{i + 1, j + 1};
        }
        return new int[]{};
    }
}
```


