class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        swap(root->left, root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
Approach : Hum recursive DFS approach use karenge binary tree ko invert karne ke liye. Sabse pehle, agar root nullptr hai, toh hum nullptr return karenge, kyunki empty tree ko invert karne par bhi empty tree hi milega. Otherwise, hum root ke left aur right children ko swap karenge using the swap() function. Phir hum recursively left aur right subtrees ko invert karenge by calling invertTree() on both children. Finally, hum root node ko return karenge, jismein ab inverted structure hoga.