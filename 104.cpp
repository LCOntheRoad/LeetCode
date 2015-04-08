/************************************************************************/
  /* ºÍ111ÌâÀàËÆ                                                          */
  /************************************************************************/

  class Solution {
  public:
	  int maxDepth(TreeNode *root) {
		  if(NULL == root)return 0;
		  else
			  myMaxDepth(root);

		  
	  }
	  int myMaxDepth(TreeNode *root)
	  {
		  if(NULL == root)return 0;
		  if (NULL == root->left && NULL == root->right)
		  {
			  return 1;
		  }
		  int min1=0;
		  int min2=0;
		  min1 = myMaxDepth(root->left);
		  min2 = myMaxDepth(root->right);

		  return (min1>min2 ? min1:min2)+1;

	  }
  };