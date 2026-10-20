class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }
        if (p == nullptr || q == nullptr)
        {
            return false;
        }
        if (p->val != q->val)
        {
            return false;
        }
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
Approach : Hum recursive DFS approach use karenge binary tree ki same structure aur values check karne ke liye.Sabse pehle, agar dono nodes nullptr hain, toh hum true return karenge, kyunki dono trees empty hain.Agar sirf ek node nullptr hai, toh hum false return karenge, kyunki trees different hain.Agar dono nodes ke values different hain, toh bhi hum false return karenge.Otherwise, hum recursively left aur right subtrees ko compare karenge by calling isSameTree() on both children.Agar dono subtrees same hain, toh hum true return karenge;
otherwise, false.