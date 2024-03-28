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
    TreeNode* invertTree(TreeNode* root) {
        
        if (root == nullptr) {
            return nullptr;
        }

        vector<TreeNode*> nodes;
        nodes.push_back(root);

        int index = 0;
        while (index < nodes.size()) {
            TreeNode* current = nodes[index];

            TreeNode* temp = current->left;
            current->left = current->right;
            current->right = temp;

            if (current->left != NULL) {
                nodes.push_back(current->left);
            }
            if (current->right!= NULL) {
                nodes.push_back(current->right);
            }
            index++;
        }

        return root;
    }
};