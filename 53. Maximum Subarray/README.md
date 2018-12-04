# README

**Approach 1**
    For DP problem, once we solve the subproblem, we can solve the big problem. We first need to find the subproblem and find the transition from the subproblem to the big problem. In this problem, since each array must has a end, lets say we have the maximum subarray ends at n - 1. And we keep an array Sum[n], where sum[n] means the array that ends at n has the maximum among the arrays that ends at n. And we need to find the transition from Sum[n - 1] to Sum[n]. In this problem, it is easy to find that Sum[n] = Sum[n - 1] + nums[i] (while nums[i] + Sum[n - 1] > nums[i]) or Sum[n] = nums[i]. And to solve the big problem, we need to traverse the array to get the maximum, and return. Of Course we can do this while we try to get the Sum[n], and it is also unnecessary to keep the array Sum. we use Integer sum instead.




