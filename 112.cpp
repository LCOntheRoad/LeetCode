/************************************************************************/
/* 思想很简单，就是递归调用                                             */
/************************************************************************/


/**
 * Definition for binary tree*/
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
		if (NULL == root)
		{
			return false;
		}

		if (NULL == root->left && NULL == root->right)
		{
			return sum == root->val;
		}
        bool res1 = hasPathSum(root->left, sum - (root->val));
		bool res2 = hasPathSum(root->right,sum -(root->val));		
		return res1||res2;
    }
};