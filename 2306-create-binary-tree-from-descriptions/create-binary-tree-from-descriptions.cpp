class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> node;
        unordered_set<int> childset;

        for (auto &it : descriptions) {
            int parent = it[0];
            int child = it[1];
            int isleft = it[2];

            if (!node[parent]) node[parent] = new TreeNode(parent);
            if (!node[child]) node[child] = new TreeNode(child);

            if (isleft) 
                node[parent]->left = node[child];
            else 
                node[parent]->right = node[child];

            childset.insert(child);
        }

        for (auto &p : descriptions) {
            if (!childset.count(p[0])) 
                return  node[p[0]];
        }

        return  nullptr;
    }
};