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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        findright(root , 0 ,ans);
        return ans;
    }

    void findright(TreeNode* root , int label , vector<int> &ans){
        if(root == NULL) return;
        if(ans.size() == label){
            ans.push_back(root->val);
        }
        findright(root->right , label+1 , ans);
        findright(root->left , label+1 , ans);
    }
};