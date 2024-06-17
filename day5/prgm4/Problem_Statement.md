# Heap Sort Algorithm
To solve the problem follow the below idea:

1) First convert the array into heap data structure using heapify, then one by one delete the root node of the Max-heap and replace it with the last node in the heap and then heapify the root of the heap. Repeat this process until size of heap is greater than 1.

2) Build a heap from the given input array.
- Repeat the following steps until the heap contains only one element:
- Swap the root element of the heap (which is the largest element) with the last element of the heap.
- Remove the last element of the heap (which is now in the correct position).
- Heapify the remaining elements of the heap.
3) The sorted array is obtained by reversing the order of the elements in the input array.

For more info , [click here](https://www.geeksforgeeks.org/heap-sort/).
