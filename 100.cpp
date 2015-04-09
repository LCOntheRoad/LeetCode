/************************************************************************/
  /* ¶Ô³Æ¶þ²æÊ÷×óÓÒµÝ¹éµ÷ÓÃ                                               */
  /************************************************************************/

  class Solution {
  public:
	  bool isSameTree(TreeNode *p, TreeNode *q) {
		  if (NULL == p && NULL == q)
		  {
			  return true;
		  }
		  else if (NULL != p && NULL == q)
		  {
			  return false;
		  }
		  else if (NULL == p && NULL != q)
		  {
			  return false;
		  }

		  if (p->val != q->val)
		  {
			  return false;
		  }

		  return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);


	  }
  };