class Solution {
public:
int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int a=maxDepth(root->left);
        int b=maxDepth(root->right);

        return 1+max(a,b);
    }
     void postorder(TreeNode* root, int count, int deep, TreeNode*& ans) {
        if (root == NULL) return;

        bool left_found = false, right_found = false;
        TreeNode* left_ans = NULL;
        TreeNode* right_ans = NULL;

        if (root->left)
            postorder(root->left, count + 1, deep, left_ans);
        if (root->right)
            postorder(root->right, count + 1, deep, right_ans);

        if (count == deep) {
            ans = root;
            return;
        }

        if (left_ans && right_ans)
            ans = root;
        else if (left_ans)
            ans = left_ans;
        else if (right_ans)
            ans = right_ans;
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int depth = maxDepth(root) - 1;
        TreeNode* ans = NULL;
        postorder(root, 0, depth, ans);
        return ans;
    }
        

    
};