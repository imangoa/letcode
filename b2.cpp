#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
    public: vector<int> inorderTraversal(TreeNode*){
        vector<int> res;
        stack<TreeNode*> stk;
        while (root!=nullptr||!stk.empty())
        {   
            while (root!=nullptr)
            {
                stk.push(root);
                root=root->left;
            }
            root=stk.top();
            stk.pop();
            res.push_back(root->val);
            root=root->right;
            
        }
        return res;
        
    }
};
