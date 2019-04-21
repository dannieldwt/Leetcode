# SOLUTION

**方法一**
```java
class Solution {
    public int maxProfit(int[] prices) {
        int result = 0;
        int i = 0;
        while (i < prices.length - 1)
        {
            while (i < prices.length - 1 && prices[i + 1] <= prices[i])
                ++i;
            int min = prices[i];
            while (i < prices.length - 1 && prices[i] <= prices[i + 1])
                ++i;
            int max = prices[i];
            result += max - min;
        }
        return result;
    }
}
```

**方法二**
```java
class Solution {
    public int maxProfit(int[] prices) {
        int result = 0;
        for (int i = 0; i < prices.length - 1; ++i)
        {
            if (prices[i + 1] > prices[i])
                result += prices[i + 1] - prices[i];
        }
        return result;
    }
}
```


