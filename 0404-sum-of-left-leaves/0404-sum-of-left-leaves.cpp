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
    void helper(TreeNode* node,int &sum, bool isLeft){
        if(node == nullptr){
            return;
        }

        if(node->left == nullptr && node->right == nullptr && isLeft == true){
            sum += node->val;
        }
        
        helper(node->left, sum, true);
        helper(node->right, sum, false);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        helper(root, sum,false);
        return sum;
        
    }
};