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
        if(!root) {
            return true;
        }
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);
        if(abs(leftHeight - rightHeight) > 1) {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
private:
    int findHeight(TreeNode* root) {
        if(!root) {
            return 0;
        }
        int left = findHeight(root->left);
        int right = findHeight(root->right);
        return 1 + max(left, right);
    }
};
