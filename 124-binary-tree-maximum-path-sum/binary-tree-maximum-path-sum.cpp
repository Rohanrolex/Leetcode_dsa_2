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
    int maxPathSum(TreeNode* root) {
        int  maxsum = INT_MIN;
        claculate(root , maxsum);
        return maxsum;
    }


    int claculate(TreeNode* root ,  int &maxsum){
        if(root == NULL) return 0;
        int left = max(0,claculate(root->left , maxsum));
        int right = max(0,claculate(root->right , maxsum));
        maxsum = max(maxsum , left+right+root->val);
        return root->val+ max(left,right);
    }
};