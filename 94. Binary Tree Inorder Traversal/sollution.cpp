class Solution {
public:
    void inorder(TreeNode* root ,vector<int>& ans){
        if(root == NULL){
            return ;
        }
        inorder(root->left ,ans);
        ans.push_back(root->val);
        inorder(root->right ,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root , ans);
        return ans ;
    }
};
Approach: The approach is to perform an inorder traversal of the binary tree. We define a helper function `inorder` that takes the current node and a reference to a vector `ans` to store the traversal result. In this function, we first check if the current node is NULL; if it is, we return. Otherwise, we recursively call `inorder` on the left child, then add the value of the current node to `ans`, and finally recursively call `inorder` on the right child. The main function `inorderTraversal` initializes an empty vector and calls the helper function, returning the final result.