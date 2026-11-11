class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            double sum = 0;
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            ans.push_back(sum / n);
        }
        return ans;
    }
};

Approach:
1. We will use a breadth-first search (BFS) approach to traverse the binary tree    level by level.
2. We will maintain a queue to keep track of the nodes at the current level. 
3. For each level, we will calculate the sum of the node values and divide it by the number of nodes at that level to get the average.
