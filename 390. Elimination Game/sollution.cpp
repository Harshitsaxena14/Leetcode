class Solution {
public:
    int solve(int n, long long first, long long gap, bool left) {
        if (n == 1) {
            return static_cast<int>(first);
        }
        if (left || n % 2 == 1) {
            first += gap;
        }
        return solve(n / 2, first, gap * 2, !left);
    }

    int lastRemaining(int n) {
        return solve(n, 1, 1, true);
    }
};