/*
TC = O(logN)
SP = constant
*/
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
        TreeNode* pNode = root;
        int nMin = min(p->val, q->val);
        int nMax = max(p->val, q->val);

        while(pNode)
        {
            if(pNode->val >= nMin && pNode->val <= nMax)
                return pNode;
            if(pNode->val > nMax)
                pNode = pNode->left;
            else
                pNode = pNode->right;
        }
        return NULL;
    }
};
