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
    void helper(TreeNode* node,int &sum, int leftTrue){
        if(node == nullptr){
            return;
        }

        if(node->left == nullptr && node->right == nullptr && leftTrue == 1){
            sum += node->val;
        }
        
        helper(node->left, sum, 1);
        helper(node->right, sum, 0);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        helper(root, sum,0);
        return sum;
        
    }
};