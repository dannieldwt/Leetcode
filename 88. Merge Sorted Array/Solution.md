# Solution

**Approach 1**
```java
class Solution {
    public int[] plusOne(int[] digits) {
        if (digits.length == 0)     return digits;
        
        int carry = 0;
        digits[digits.length - 1]++;
        for (int i = digits.length - 1; i >= 0; --i)
        {
            int temp = digits[i] + carry;
            if (temp >= 10)
            {
                digits[i] = temp % 10;
                carry = 1;
            }
            else
            {
                digits[i] = temp;
                carry = 0;
                break;
            }
        }
        
        if (carry == 1)
        {
            int[] result = new int[digits.length + 1];
            result[0] = 1;
            return result;
        }
        return digits;
    }
}
```




