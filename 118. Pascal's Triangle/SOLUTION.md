# SOLUTION

```java
   class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        
        if (numRows == 0)
            return result;
        
        result.add(new ArrayList<Integer>());
        result.get(0).add(1);
        
        for (int it = 1; it < numRows; ++it)
        {
            int pre = 0;
            List<Integer> last = result.get(it - 1);
            List<Integer> temp = new ArrayList<Integer>(); 
            for (int i = 0; i < last.size(); ++i)
            { 
                temp.add(last.get(i) + pre);
                pre = last.get(i);
            }
            temp.add(last.get(last.size() - 1));
            result.add(temp);
        }
        
        return result;
    }
} 
```

