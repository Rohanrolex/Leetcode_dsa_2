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

bool ans(TreeNode* root , long min , long max){
     if(root == NULL) return true; 

     if(root->val <= min || root->val >= max) return false;

     return ans(root->left , min , root->val) && ans(root->right , root->val , max);
}
    bool isValidBST(TreeNode* root) {
        return ans(root , LONG_MIN , LONG_MAX);
    }
};