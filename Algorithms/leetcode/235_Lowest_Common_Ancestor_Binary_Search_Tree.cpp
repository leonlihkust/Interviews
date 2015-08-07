/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     TreeNode *left;

 *     TreeNode *right;

 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}

 * };

 */

class Solution {

public:

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        int nMin = min(p->val,q->val);
        int nMax = max(p->val,q->val);

        if(nMax < root->val)
            return lowestCommonAncestor(root->left, p , q);

        if(nMin > root->val)
            return lowestCommonAncestor(root->right, p , q);

        return root;
    }

};
