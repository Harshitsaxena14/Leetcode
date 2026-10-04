# 390. Elimination Game

**Difficulty:** Medium

## Problem

You have a list `arr` of all integers in the range `[1, n]` sorted in a strictly increasing order. Apply the following algorithm on `arr`:

- Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.
- Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.
- Keep repeating the steps again, alternating left to right and right to left, until a single number remains.

Given the integer `n`, return *the last number that remains in* `arr`.

## Examples

**Example 1:**

Input: `n = 9`

Output: `6`

**Explanation:**

```text
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
arr = [2, 4, 6, 8]
arr = [2, 6]
arr = [6]
```

## Approach

After each round, the number of remaining elements is halved and the
distance between adjacent elements doubles. Track the first remaining value,
the distance between values, and the direction of the next elimination round.

The first value moves forward when eliminating from the left. When eliminating
from the right, it moves forward only if the number of remaining elements is
odd. Repeating this process takes `O(log n)` time and `O(log n)` stack space.

## Constraints

- `1 <= n <= 10^9`