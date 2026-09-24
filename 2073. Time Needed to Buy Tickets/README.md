## [2073. Time Needed to Buy Tickets](https://leetcode.com/problems/time-needed-to-buy-tickets/)

**Easy**

### Problem

There are `n` people in a queue waiting to buy tickets. The person at position `i` wants to buy `tickets[i]` tickets.

Each person takes exactly **1 second** to buy one ticket.

The people buy tickets in a circular order:

- The person at the front of the queue buys one ticket.
- If they still need more tickets, they go to the back of the queue.
- If they have bought all their tickets, they leave the queue.

Given an integer `k`, return the **total time needed** for the person at index `k` to finish buying all their tickets.

### Example 1

**Input:**
`tickets = [2,3,2], k = 2`

**Output:**
`6`

**Explanation:**

The person at index `2` needs 2 tickets.

The ticket purchases happen in this order:

`[2,3,2]`

After each person buys one ticket, the queue changes until person `2` finishes.

The total time required is `6` seconds.

### Example 2

**Input:**
`tickets = [5,1,1,1], k = 0`

**Output:**
`8`

**Explanation:**

The person at index `0` needs 5 tickets.

Before they finish, the other people each buy their required tickets.

The total time required is `8` seconds.

### Constraints

- `n == tickets.length`
- `1 <= n <= 100`
- `1 <= tickets[i] <= 100`
- `0 <= k < n`

Approach : Approach is , you do not actually need to shift the array or remove them , the kth element is the contribution of elements before the kth element and there are arr[k] -1 contributions of elements after kth element so just add them all to get result
