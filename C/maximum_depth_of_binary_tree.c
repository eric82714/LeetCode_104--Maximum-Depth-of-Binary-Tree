/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <math.h>

int maxDepth(struct TreeNode* root){
    if(root == NULL) return 0;
    else {
        return 1 + (int)fmax(maxDepth(root->left), maxDepth(root->right));
    }
}
        
int countDepth(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q == NULL) return 0;
    else if(p != NULL && q == NULL) {
        return 1 + countDepth(p->left, p->right);
    }
    else if(p == NULL && q != NULL) {
        return 1 + countDepth(q->left, q->right);
    }
    else {
        return 1 + (int)fmax(countDepth(p->left, p->right), countDepth(q->left, q->right));
    }
}
