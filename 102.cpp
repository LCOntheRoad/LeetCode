/************************************************************************/
  /* 和107题一样                                                          */
  /************************************************************************/
class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
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
			
			res.push_back(temp);
			
		}

		/*while (!tempStack.empty())
		{
			
			res.push_back(tempStack.top());
			tempStack.pop();
		}*/
		return res;
        
    }
};