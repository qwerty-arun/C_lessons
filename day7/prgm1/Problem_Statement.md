# ALL PERMUTATIONS OF A STRING
A permutation also called an “arrangement number” or “order,” is a rearrangement of the elements of an ordered list S into a one-to-one correspondence with S itself. A string of length N has N! permutations.

Input: S = “ABC”
Output: “ABC”, “ACB”, “BAC”, “BCA”, “CBA”, “CAB”

Follow the given steps to solve the problem:

Create a function permute() with parameters as input string, starting index of the string, ending index of the string
Call this function with values input string, 0, size of string – 1
In this function, if the value of  L and R is the same then print the same string
Else run a for loop from L to R and swap the current element in the for loop with the inputString[L]
Then again call this same function by increasing the value of L by 1
After that again swap the previously swapped values to initiate backtracking
