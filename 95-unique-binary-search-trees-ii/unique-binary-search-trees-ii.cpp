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
 vector<TreeNode*>restree(int start ,  int end){
      vector<TreeNode*>result; //for storing the result
      if(start>end){
         result.push_back(NULL);
         return result;
      }
  for(int i =start ; i<=end ;i++){
  vector<TreeNode*>leftTree = restree(start , i-1);
  vector<TreeNode*>rightTree = restree(i+1 ,end);


  //just add left and right subtree to the root node 

    for(TreeNode* left : leftTree){
        for(TreeNode* right : rightTree){
            TreeNode* root = new TreeNode(i);
            root->left = left;
            root->right = right;

            result.push_back(root);  //push the  root into the result 
            
        }
    }

  }
  return result;



 }


    vector<TreeNode*> generateTrees(int n) {
       if(n==0) return{}; //just return empty 
        return restree(1 , n);

       
        
    }
};