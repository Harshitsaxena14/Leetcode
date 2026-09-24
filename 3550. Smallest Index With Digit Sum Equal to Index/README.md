## [3550. Smallest Index With Digit Sum Equal to Index](https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/)

**Easy**

### Problem

You are given an integer array `nums`.

Return the **smallest index** `i` such that the **sum of the digits** of `nums[i]` is equal to `i`.

If no such index exists, return `-1`.

### Example 1

**Input:**
`nums = [1,2,3,4,5]`

**Output:**
`2`

**Explanation:**

- Index `0`: digit sum of `1` = `1` → not equal to `0`
- Index `1`: digit sum of `2` = `2` → not equal to `1`
- Index `2`: digit sum of `3` = `3` → not equal to `2`

> Note: The exact examples for this problem depend on the input values; the condition to check is `digitSum(nums[i]) == i`.

### Approach

For every index `i`:

1. Take `nums[i]`.
2. Calculate the sum of its digits.
3. Check if the digit sum is equal to `i`.
4. Return the first index where the condition is satisfied.
5. If no index satisfies the condition, return `-1`.

### Digit Sum Example

For `nums[i] = 123`:

`1 + 2 + 3 = 6`

So if `i = 6`, this index satisfies the condition.

### Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 10^9`