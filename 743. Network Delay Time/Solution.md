# Solution.h
```java
class Solution {
    public int networkDelayTime(int[][] times, int N, int K) {
        //construct graph
        Map<Integer, ArrayList<int[]>> graph = new HashMap<Integer, ArrayList<int[]>>();
        for (int[] edge: times)
        {
            if (!graph.containsKey(edge[0]))
                graph.put(edge[0], new ArrayList<int[]>());
            graph.get(edge[0]).add(new int[]{edge[1], edge[2]});
        }
        // use visited to mark the point visited
        Map<Integer, Boolean> visited = new HashMap<>();
        int result = 0;
        // use heap to find the minimum
        PriorityQueue<int[]> heap = new PriorityQueue<int[]>(
                    (info1, info2) -> info1[0] - info2[0]);
        // use Label to mark the weight 
        // as the number of the point is not sure
        Map<Integer, Integer> Label = new HashMap<Integer, Integer>();
        
        Label.put(K, 0);
        heap.offer(new int[]{0, K});
        
        while (!heap.isEmpty())
        {
            int[] mini = heap.poll();
            int weight = mini[0];
            int node = mini[1];
            if (visited.containsKey(node))
                continue;
            
            visited.put(node, true);
           
            if (graph.get(node) == null)
            	continue;
            
            for (int[] edge: graph.get(node))
            {
                int target = edge[0];
                int targetWeight = edge[1];
                if (!Label.containsKey(target)) {
                	Label.put(target, targetWeight + Label.get(node));
                	heap.offer(new int[] {Label.get(target), target});
                	continue;
                }
                if (!visited.containsKey(target) && Label.get(target) > Label.get(node) + targetWeight)
                {
                    Label.put(target, targetWeight + Label.get(node));
                    heap.offer(new int[]{Label.get(target), target});
                }
            }
            
        }
        
        if (Label.size() != N)
            return -1;
        result = -1;
        for (int cand: Label.values())
        	if (cand > result)
        		result = cand;
        
        return result;
    }
}
```



