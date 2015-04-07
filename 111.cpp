/************************************************************************/
/* 思想很简单，就是递归调用，只是在处理细节时需要注意                   */
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
	  int minDepth(TreeNode *root) {
		  if(NULL == root)return 0;
		  else
			  myMinDepth(root);

		  
	  }
	  int myMinDepth(TreeNode *root)
	  {
		  if(NULL == root)return 9999;
		  if (NULL == root->left && NULL == root->right)
		  {
			  return 1;
		  }
		  int min1=0;
		  int min2=0;
		  /*if(NULL != root->left && NULL == root->right)
		  {
			  return minDepth(root->left)+1;
		  }
		  if(NULL != root->right && NULL == root->left)
			  min2 = minDepth(root->right);*/

		  min1 = myMinDepth(root->left);
		  min2 = myMinDepth(root->right);

		  return (min1<min2 ? min1:min2)+1;

	  }
  };