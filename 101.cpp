
/************************************************************************/
  /* �Գƶ��������жϣ����ö��б���ڵ㼴��                               */
  /************************************************************************/


class Solution {
public:
  bool isSymmetric(TreeNode *root) {
	  queue<TreeNode *> myQueue;
	  if (NULL == root)
	  {
		  return true;
	  }
	  if (NULL != root->left && NULL != root->right)
	  {
		  myQueue.push(root->left);
		  myQueue.push(root->right);
	  }
	  else if (NULL == root->left && NULL == root->right)
	  {
		  return true;
	  }
	  else
		  return false;

	  TreeNode *temp1,*temp2;

	  while(!myQueue.empty())
	  {
		  temp1 = myQueue.front();
		  myQueue.pop();
		  temp2 = myQueue.front();
		  myQueue.pop();
		  if (NULL == temp1 && NULL == temp2)
		  {
			  continue;
		  }
		  else if (NULL != temp1 && NULL == temp2)
		  {
			  return false;
		  }
		  else if (NULL == temp1 && NULL != temp2)
		  {
			  return false;
		  }
		  else if (temp1->val == temp2->val)
		  {
			  myQueue.push(temp1->left);
			  myQueue.push(temp2->right);
			  myQueue.push(temp1->right);
			  myQueue.push(temp2->left);			  		  
		  }
		  else
			  return false;

	  }
	  return true;

  }
};