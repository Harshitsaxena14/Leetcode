## [875. Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)

**Medium**

### Problem

Koko loves bananas. There are `n` piles of bananas, where the `i`th pile has `piles[i]` bananas. The guards will leave for `h` hours.

Koko can decide her banana-eating speed of `k` bananas per hour. Each hour, she chooses some pile of bananas and eats `k` bananas from that pile. If the pile has fewer than `k` bananas, she eats all of them instead, and she cannot eat from another pile during the same hour.

Koko likes to eat slowly but wants to finish all the bananas before the guards return.

Return the **minimum integer `k`** such that she can eat all the bananas within `h` hours.

### Example 1

**Input:**
`piles = [3,6,7,11], h = 8`

**Output:**
`4`

**Explanation:**

At a speed of `4` bananas per hour:

- Pile `3` takes `1` hour.
- Pile `6` takes `2` hours.
- Pile `7` takes `2` hours.
- Pile `11` takes `3` hours.

Total = `1 + 2 + 2 + 3 = 8` hours.

Therefore, the minimum eating speed is `4`.

### Example 2

**Input:**
`piles = [30,11,23,4,20], h = 5`

**Output:**
`30`

**Explanation:**

Koko has exactly 5 hours and there are 5 piles, so she must finish one pile in each hour.

The largest pile contains `30` bananas, so the minimum possible speed is `30`.

### Example 3

**Input:**
`piles = [30,11,23,4,20], h = 6`

**Output:**
`23`

**Explanation:**

At a speed of `23` bananas per hour:

- `30` takes `2` hours.
- `11` takes `1` hour.
- `23` takes `1` hour.
- `4` takes `1` hour.
- `20` takes `1` hour.

Total = `2 + 1 + 1 + 1 + 1 = 6` hours.

Therefore, the minimum eating speed is `23`.

### Constraints

- `1 <= piles.length <= 10^4`
- `piles.length <= h <= 10^9`
- `1 <= piles[i] <= 10^9`

Approach : My Approach is to use binary search between left = 0  and right = max element of piles ...thhen 