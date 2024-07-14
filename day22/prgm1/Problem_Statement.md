# Check whether a list is NULL-terminated or not. If there is a cycle, find the start of the loop. 
> ### Solution: We use two pointers, one fast and one slow. After finding the loop in the list, we initialize slow pointer to head of the list. The point at which they meet is the start of the loop. Time: O(n) and Space: O(1).
