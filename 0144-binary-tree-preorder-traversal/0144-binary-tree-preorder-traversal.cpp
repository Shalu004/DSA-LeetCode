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
    void solve(TreeNode* root, vector<int>& ans){    //using recurssion
        if(!root) return;

        ans.push_back(root->val);
        solve(root->left, ans);
        solve(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};


/* using stack

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;

        if(root==NULL) return res;

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            res.push_back(node->val);

            if(node->right) st.push(node->right);
            if(node->left)  st.push(node->left);

        }
        return res;
    }
};
*/