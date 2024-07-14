# Check whether a list is NULL-terminated or not. If there is a cycle, find the length of the loop. 
> ### Solution: We use two pointers, one fast and one slow. After finding the loop in the list, we keep the slow pointer as is. The fast pointer keeps moving till it reaches slow again. Keep a counter which increment at rate of 1. Time: O(n) and Space: O(1).
