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
vector<int>v;
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return -1;
        bfs(root);

  if(k>0 && k<=v.size()) return  v[k-1];

    return -1;
        
    }

    void bfs(TreeNode* root){
        if(root==NULL) return;
     bfs(root->left);
     v.push_back(root->val);
     bfs(root->right);
    }
};