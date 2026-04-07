/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    
    bool isBalanced(TreeNode* root) {
        return dfs(root)!= -1;
    }
    int dfs(TreeNode* node){
        if(!node) return 0;
        int l = dfs(node->left);
        int r = dfs(node->right);
        if(l == -1 or r == -1) return -1;
        if(abs(l - r) > 1) return -1;
        return 1+max(l,r);
    }
};
