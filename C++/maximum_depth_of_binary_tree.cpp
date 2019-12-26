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
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        else {
            return 1 + countDepth(root->left, root->right);
        }
    }
        
    int countDepth(TreeNode* p, TreeNode* q) {
        if(p == NULL and q == NULL) return 0;
        else if(p != NULL and q == NULL) {
            return 1 + countDepth(p->left, p->right);
        }
        else if(p == NULL and q != NULL) {
            return 1 + countDepth(q->left, q->right);
        }
        else {
            return max(1 + countDepth(p->left, p->right), 1 + countDepth(q->left, q->right));
        }
    }
};
