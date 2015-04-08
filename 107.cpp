/************************************************************************/
/* 核心思想是二叉树的层次遍历，利用queue即可，主要是需要给每一层
做好标记，以便确定一层的结尾节点*/
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