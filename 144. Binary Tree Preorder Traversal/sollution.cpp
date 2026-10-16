
class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) {
            return;
        }

        ans.push_back(root->val);  // Root
        preorder(root->left, ans); // Left
        preorder(root->right, ans);// Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};

// Approach: The approach is to perform a preorder traversal of the binary tree. We define a helper function `preorder` that takes the current node and a reference to a vector `ans` to store the traversal result. In this function, we first check if the current node is NULL; if it is, we return. Otherwise, we add the value of the current node to `ans`, then recursively call `preorder` on the left child followed by the right child. The main function `preorderTraversal` initializes an empty vector and calls the helper function, returning the final result.