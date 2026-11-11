class Solution
{
public:
    bool isMirror(TreeNode *left, TreeNode *right)
    {
        if (left == nullptr && right == nullptr)
        {
            return true;
        }
        if (left == nullptr || right == nullptr)
        {
            return false;
        }
        if (left->val != right->val)
        {
            return false;
        }
        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
        {
            return true;
        }
        return isMirror(root->left, root->right);
    }
};
Approach : Hum recursive DFS approach use karenge binary tree ki symmetry check karne ke liye.Sabse pehle, agar root nullptr hai, toh hum true return karenge, kyunki empty tree symmetric hota hai.Otherwise, hum root ke left aur right subtrees ko compare karenge using the isMirror() function.isMirror() function recursively check karega ki left subtree ka left child aur right subtree ka right child same hain ya nahi, aur left subtree ka right child aur right subtree ka left child same hain ya nahi.Agar dono conditions satisfy hoti hain, toh tree symmetric hoga;
otherwise, nahi hoga.