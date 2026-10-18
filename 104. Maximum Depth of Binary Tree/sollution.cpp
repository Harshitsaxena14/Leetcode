class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return 1 + max(leftDepth, rightDepth);
    }
};
// Approach : Hum recursive DFS approach use karenge binary tree ki maximum depth find karne ke liye.Sabse pehle, agar root nullptr hai, toh hum 0 return karenge, kyunki empty tree ki depth 0 hoti hai.Otherwise, hum recursively left aur right subtree ki depth calculate karenge by calling maxDepth() on both children.Finally, hum dono depths mein se maximum depth lenge aur usmein 1 add karenge, kyunki 1 current node ko count karta hai.Yeh process har node ke liye repeat hota hai, aur end mein humein tree ki maximum depth mil jaati hai.