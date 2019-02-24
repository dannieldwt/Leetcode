# SOLUTION

```java
class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> result = new ArrayList<Integer>();
        result.add(1);
        
        for (int it = 1; it <= rowIndex; ++it)
        {
            List<Integer> temp = new ArrayList<Integer>();
            int pre = 0;
            for (int i = 0; i < result.size(); ++i)
            {
                temp.add(pre + result.get(i));
                pre = result.get(i);
            }
            temp.add(result.get(result.size() - 1));
            result = temp;
        }
        
        return result;
    }
}
```

