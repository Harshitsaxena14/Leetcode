# 980. Unique Paths III

**Difficulty:** Hard

## Problem

You are given an `m x n` integer array `grid` where `grid[i][j]` could be:

- `1` representing the starting square. There is exactly one starting square.
- `2` representing the ending square. There is exactly one ending square.
- `0` representing empty squares we can walk over.
- `-1` representing obstacles that we cannot walk over.

Return _the number of 4-directional walks from the starting square to the ending square, that walk over every non-obstacle square exactly once_.

## Examples

**Example 1:**

Input: `grid = [[1,0,0,0],[0,0,0,0],[0,0,2,-1]]`

Output: `2`

**Explanation:**

We have the following two paths:

1. `(0,0),(0,1),(0,2),(0,3),(1,3),(1,2),(1,1),(1,0),(2,0),(2,1),(2,2)`
2. `(0,0),(1,0),(2,0),(2,1),(1,1),(0,1),(0,2),(0,3),(1,3),(1,2),(2,2)`

**Example 2:**

Input: `grid = [[1,0,0,0],[0,0,0,0],[0,0,0,2]]`

Output: `4`

**Explanation:**

We have the following four paths:

1. `(0,0),(0,1),(0,2),(0,3),(1,3),(1,2),(1,1),(1,0),(2,0),(2,1),(2,2),(2,3)`
2. `(0,0),(0,1),(1,1),(1,0),(2,0),(2,1),(2,2),(1,2),(0,2),(0,3),(1,3),(2,3)`
3. `(0,0),(1,0),(2,0),(2,1),(2,2),(1,2),(1,1),(0,1),(0,2),(0,3),(1,3),(2,3)`
4. `(0,0),(1,0),(2,0),(2,1),(1,1),(0,1),(0,2),(0,3),(1,3),(1,2),(2,2),(2,3)`

**Example 3:**

Input: `grid = [[0,1],[2,0]]`

Output: `0`

**Explanation:**

There is no path that walks over every empty square exactly once.

Note that the starting and ending square can be anywhere in the grid.

## Constraints

- `m == grid.length`
- `n == grid[i].length`
- `1 <= m, n <= 20`
- `1 <= m * n <= 20`
- `-1 <= grid[i][j] <= 2`
- There is exactly one starting cell and one ending cell.

Approach : Approach is to use a dfs and backtracking in which we find the 1 and where we find 1 we will pass that index to dfs in the return statement you have to go through each index of the given matrix and call dfs for that index and for each index we willl call dfs function and in which we will check if it is 2 then we check is there is still 1 remaining which means that the path is valid and we can increase out path count and if that is 0 or more then 1 then itss invalid we cannot take this path then we call dfs in all directions from that and if it is valid then we add 1 else nothing is added into the ans then we return ans at the end ;
