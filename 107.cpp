/************************************************************************/
/* ����˼���Ƕ������Ĳ�α���������queue���ɣ���Ҫ����Ҫ��ÿһ��
���ñ�ǣ��Ա�ȷ��һ��Ľ�β�ڵ�*/
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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
		vector<vector<int> > res;
		stack<vector<int> > tempStack;
		
		vector<int> temp;
		TreeNode *pNode=NULL;
		temp.clear();
		res.clear();
		if (NULL == root)
		{
			return res;
		}

		queue<TreeNode *> myQue;
		myQue.push(root);
		while (!myQue.empty())
		{
			myQue.push(NULL);
			temp.clear();
			pNode = myQue.front();
			myQue.pop();
			while (NULL != pNode)
			{
				temp.push_back(pNode->val);
				if (NULL != pNode->left)
				{
					myQue.push(pNode->left);
				}
				if (NULL != pNode->right)
				{
					myQue.push(pNode->right);
				}
				pNode = myQue.front();
				myQue.pop();

			}
			
			tempStack.push(temp);
			
		}

		while (!tempStack.empty())
		{
			
			res.push_back(tempStack.top());
			tempStack.pop();
		}
		res;
        
    }
};