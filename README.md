# Searching-in-an-array-where-adjacent-differ-by-at-most-k
Given a step array, an integer k and a key x, we need to find the index value of x if multiple-element exist to return the first occurrence of the key. A step array is an array of integers where each element has a difference of at most k with its neighbor. 
Examples: 
Input : arr[] = {4, 5, 6, 7, 6}
           k = 1
           x = 6
Output : 2
The first index of 6 is 2.

Input : arr[] = {20, 40, 50, 70, 70, 60}  
          k = 20
          x = 60
Output : 5
The index of 60 is 5



A general idea anyone would get is to compare each and every element with "x" .
A more optimal approach to this problem is ...
To start traversing from left and find the difference between current element and "x" , let this difference be "diff". 
from the property mentioned we always know that "x" must be "diif/k" indexes away from our position . 
Instead of traversing one position we can follow this approach instead and thus optimizing the code .
