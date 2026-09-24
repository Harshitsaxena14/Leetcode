## [150. Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)

**Medium**

### Problem

You are given an array of strings `tokens` that represents an arithmetic expression in **Reverse Polish Notation**.

Evaluate the expression and return the integer that represents its value.

### Valid Operators

The valid operators are:

- `+` — Addition
- `-` — Subtraction
- `*` — Multiplication
- `/` — Division

Division between two integers should truncate toward zero.

The input represents a valid arithmetic expression in Reverse Polish Notation.

### Important Note

The order of operands matters for `-` and `/`.

For example:

`["4", "2", "-"]`

means:

`4 - 2 = 2`

and

`["4", "2", "/"]`

means:

`4 / 2 = 2`

### Example 1

**Input:**
`tokens = ["2","1","+","3","*"]`

**Output:**
`9`

**Explanation:**

`((2 + 1) * 3) = 9`

### Example 2

**Input:**
`tokens = ["4","13","5","/","+"]`

**Output:**
`6`

**Explanation:**

`4 + (13 / 5) = 4 + 2 = 6`

### Example 3

**Input:**
`tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]`

**Output:**
`22`

**Explanation:**

The expression evaluates to `22`.

### Constraints

- `1 <= tokens.length <= 10^4`
- `tokens[i]` is either an operator: `+`, `-`, `*`, or `/`, or an integer in the range `[-200, 200]`.
- The division operation between two integers always truncates toward zero.
- There will not be any division by zero.
- The input represents a valid arithmetic expression in Reverse Polish Notation.
- The answer and all intermediate calculations can be represented in a 32-bit integer.