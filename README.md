# LeetCode

## List
+ \#6. ZigZag Conversion
+ \#14. Longest Common Prefix
+ \#21. Merge Two Sorted Lists
+ \#24. Swap Nodes in Pairs
+ \#35. Search Insert Position
+ \#38. Count and Say
+ \#73. Set Matrix Zeroes
+ \#88. Merge Sorted Array
+ \#112. Path Sum
+ \#121. Best Time to Buy and Sell Stock
+ \#129. Sum Root to Leaf Numbers
+ \#169. Majority Element

## Detail
### \#6. ZigZag conversion
**LeetCode Link:**

[https://leetcode.com/problems/zigzag-conversion/](https://leetcode.com/problems/zigzag-conversion/)

**Problem description:**

>The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fiexd font for better legibility)
>```
>  P   A   H   N
>  A P L S I I G
>  Y   I   R
>```
>And then read line by line: `"PAHNAPLSIIGYIR"`

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%236ZigZag_Conversion.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%236ZigZag_Conversion.cpp)

**Detail:**

*Warming*: `ceil(1 / 2)`, `ceil((float)1 / 2)` 

### \#14. Longest Common Prefix
**LeetCode Link:**

[https://leetcode.com/problems/longest-common-prefix/](https://leetcode.com/problems/longest-common-prefix/)

**Problem description:**

>Write a function to find the longest common prefix string amongst an array of strings.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2314Longest_Common_Prefix.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2314Longest_Common_Prefix.cpp)

**Detail:**


### \#21. Merge Two Sorted Lists
**LeetCode Link:**

[https://leetcode.com/problems/merge-two-sorted-lists/](https://leetcode.com/problems/merge-two-sorted-lists/)

**Problem description:**

>Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2321Merge_Two_Sorted_Lists.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2321Merge_Two_Sorted_Lists.cpp)

**Detail:**

Notice the pointer

### \#24. Swap Nodes in Pairs
**LeetCode Link:**

[https://leetcode.com/problems/swap-nodes-in-pairs/](https://leetcode.com/problems/swap-nodes-in-pairs/)

**Problem description:**

>Given a linked list, swap every two adjacent nodes and return its head.
>
>For example,
>Given `1->2->3->4`, you should return the list as `2->1->4->3`.
>
>Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2324Swap_Nodes_in_Pairs.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2324Swap_Nodes_in_Pairs.cpp)

**Detail:**

*Note*: When link-list, paint


### \#32. Count and Say
**LeetCode Link:**

[https://leetcode.com/problems/count-and-say/](https://leetcode.com/problems/count-and-say/)

**Problem description:**

>The count-and-say sequence is the sequence of integers beginning as follows:
>
>`1, 11, 21, 1211, 111221, ...`

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2332Count_and_Say.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2332Count_and_Say.cpp)

**Detail:**


### \#35. Search Insert Position
**LeetCode Link:**

[https://leetcode.com/problems/search-insert-position/](https://leetcode.com/problems/search-insert-position/)

**Problem description:**

>Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
>
>You may assume no duplicates in the array.
>
>Here are few examples.
>`[1,3,5,6]`, 5 → 2
>`[1,3,5,6]`, 2 → 1
>`[1,3,5,6]`, 7 → 4
>`[1,3,5,6]`, 0 → 0

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2335Search_Insert_Position.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2335Search_Insert_Position.cpp)

**Detail:**


### \#73. Set Matrix Zeroes
**LeetCode Link:**

[https://leetcode.com/problems/set-matrix-zeroes/](https://leetcode.com/problems/set-matrix-zeroes/)

**Problem description:**

>Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2373Set_Matrix_Zeroes.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2373Set_Matrix_Zeroes.cpp)

**Detail:**

Use *row 1* and *col 1* to save status, must save *row 1* and *col 1*'a status.

### \#88. Merge Sorted Array
**LeetCode Link:**

[https://leetcode.com/problems/merge-sorted-array/](https://leetcode.com/problems/merge-sorted-array/)

**Problem description:**

>Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
>
>*Note*: You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2321Merge_Sorted_Array.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%2321Merge_Sorted_Array.cpp)
     
**Detail:**


### \#112. Path Sum
**LeetCode Link:**

[https://leetcode.com/problems/path-sum/](https://leetcode.com/problems/path-sum/)

**Problem description:**

>Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.
>
>For example:
>Given the below binary tree and sum = 22,
>```
>              5
>             / \
>            4   8
>           /   / \
>          11  13  4
>         /  \      \
>        7    2      1
>```
>return true, as there exist a root-to-leaf path `5->4->11->2` which sum is 22.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23112Path_Sum.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23112Path_Sum.cpp)
     
**Detail:**

*Warming*: what is leaf!

### \#129. Sum Root to Leaf Numbers
**LeetCode Link:**

[https://leetcode.com/problems/sum-root-to-leaf-numbers/](https://leetcode.com/problems/sum-root-to-leaf-numbers/)

**Problem description:**

>Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.
>
>An example is the root-to-leaf path `1->2->3` which represents the number 123.
>
>Find the total sum of all root-to-leaf numbers.
>
>For example,
>```
>    1
>   / \
>  2   3
>```
>The root-to-leaf path `1->2` represents the number `12`.
>The root-to-leaf path `1->3` represents the number `13`.
>
>Return the sum = `12` + `13` = `25`.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23129Sum_Root_to_Leaf_Numbers.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23129Sum_Root_to_Leaf_Numbers.cpp)

**Detail:**



### \#121. Best Time to Buy and Sell Stock
**LeetCode Link:**

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

**Problem description:**

>Say you have an array for which the ith element is the price of a given stock on day i.
>
>If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23121Best_Time_to_Buy_and_Sell_Stock.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23121Best_Time_to_Buy_and_Sell_Stock.cpp)

**Detail:**

This is a `Dynamic Programing`. Iteration may time excced, so must use recurrence.

### \#169. Majority Element
**LeetCode Link:**

[https://leetcode.com/problems/majority-element/](https://leetcode.com/problems/majority-element/)

**Problem description:**

>Given an array of size n, find the majority element. The majority element is the element that appears more than `⌊ n/2 ⌋` times.
>
>You may assume that the array is non-empty and the majority element always exist in the array.

**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23169Majority_Element.cpp](https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23169Majority_Element.cpp)

**Detail:**

*Warming*: qsort just use in array, not POD or any struct.


### \#
**LeetCode Link:**



**Problem description:**



**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23.cpp]()

**Detail:**



### \#
**LeetCode Link:**



**Problem description:**



**Source code:**

[https://github.com/BobyZhang/LeetCode/blob/master/LeetCodeSolution/%23.cpp]()

**Detail:**


