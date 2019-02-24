# SOLUTION

```java
class Solution {
    public int maxProfit(int[] prices) {
        if (prices.length == 0)
            return 0;
        int[] sub = new int[prices.length];
        sub[0] = 0;
        for (int i  = 1; i < sub.length; ++i)
        {
            sub[i] = prices[i] - prices[i - 1];
        }
        int temp = 0;
        int result = 0;
        for (int i = 0; i < sub.length; ++i)
        {
            if (temp < 0)
                temp = sub[i];
            else
                temp = sub[i] + temp;
            if (temp > result)
                result = temp;
        }
        return result;
    }
}
```

