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
    bool helper (TreeNode* leftNode,TreeNode* rightNode){
        if(leftNode == nullptr && rightNode == nullptr){
            return true;
        }
        if(leftNode == nullptr || rightNode == nullptr){
            return false;
        }

        if(leftNode->val == rightNode->val){
            if (helper(leftNode->left, rightNode->right) &&
                helper(leftNode->right, rightNode->left)) {
                return true;
            }
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;

        return helper(root->left, root->right);
        
    }
};