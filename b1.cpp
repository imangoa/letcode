#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
    public:
        void inorder(TreeNode* root,vector<int>&res)
        {
            inorder(root->left);
            res.push_back(root->val);
            inorder(root->right);
            return;

        }
        vector<int> inorderTraversal(TreeNode* root){
            vector<int> res;
            inorder(root,res);
            return res;
        }

};
