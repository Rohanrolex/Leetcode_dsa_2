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


    TreeNode* deleteNode(TreeNode* root, int key) {

    if (!root) return NULL;

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    }
    else {
        // no child
        if (!root ->left && !root->right) return NULL;

        // one child
        if (!root->left) return root->right;
        if (!root->right) return root->left;

        // two children: use inorder successor (min of right subtree)
        TreeNode* t = root->right;
        while (t->left) t = t->left;
        root->val = t->val;
        root->right = deleteNode(root->right, t->val);
    }
    return root;
}

    

};