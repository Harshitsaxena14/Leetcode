## [2130. Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/)

**Medium**

### Problem

In a linked list of size `n`, where `n` is an even integer, the `ith` node (0-indexed) is known as the **twin** of the `(n-1-i)th` node.

For example, if `n = 4`, node `0` is the twin of node `3`, and node `1` is the twin of node `2`.

The **twin sum** is the sum of a node and its twin.

Given the `head` of a linked list with an even length, return the **maximum twin sum** of the linked list.

### Example 1

**Input:**
`head = [5,4,2,1]`

**Output:**
`6`

**Explanation:**

The nodes are:

- Node `0` and Node `3`: `5 + 1 = 6`
- Node `1` and Node `2`: `4 + 2 = 6`

The maximum twin sum is `6`.

### Example 2

**Input:**
`head = [4,2,2,3]`

**Output:**
`7`

**Explanation:**

The nodes are:

- Node `0` and Node `3`: `4 + 3 = 7`
- Node `1` and Node `2`: `2 + 2 = 4`

The maximum twin sum is `7`.

### Example 3

**Input:**
`head = [1,100000]`

**Output:**
`100001`

**Explanation:**

The only pair of twin nodes is `1` and `100000`.

Their twin sum is `1 + 100000 = 100001`.

### Constraints

- The number of nodes in the list is an even integer in the range `[2, 10^5]`.
- `1 <= Node.val <= 10^5`