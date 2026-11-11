class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};
// ### Approach: BFS (Level Order Traversal)

// - Queue (`q`) use karo to process nodes level by level, left to right.
// - `size = q.size()` se current level ke nodes count karo.
//   - Front node lo (`q.front()`) aur remove karo (`q.pop()`).
//   - Uski value `level` mein add karo (`node->val`).
//   - Left aur right child `nullptr` nahi hain toh queue ke back mein push karo.
// - Current level complete hone par `level` ko `ans` mein add karo.
// - Finally, `ans` return karo.

// Key point: `size` ko loop se pehle store karna zaroori hai, taaki naye children next level mein process hon, current level mein nahi.

// **Complexity:** Time: `O(n)` | Space: `O(n)` — `n` = total nodes.