class Solution {
public:
    int prevOrder = 0;   // count
    int leftAns = -1;    // store answer

    int kthSmallest(TreeNode* root, int k) {
        if (root == NULL) {
            return -1;
        }

        // LEFT
        if (root->left != NULL) {
            leftAns = kthSmallest(root->left, k);
            if (leftAns != -1) {
                return leftAns;
            }
        }

        // ROOT
        prevOrder++;
        if (prevOrder == k) {
            return root->val;
        }

        // RIGHT
        if (root->right != NULL) {
            leftAns = kthSmallest(root->right, k); // ✅ FIXED (right subtree)
            if (leftAns != -1) {
                return leftAns;
            }
        }

        return -1; // default return
    }
};