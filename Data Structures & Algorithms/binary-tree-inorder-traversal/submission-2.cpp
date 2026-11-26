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
    vector<int> vals;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return vals;
    }
    private:
    void inorder(TreeNode* node) {
        if(node != nullptr) {
            inorder(node->left);
            vals.push_back(node->val);
            inorder(node->right);
        }
    }
};