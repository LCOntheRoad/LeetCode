/************************************************************************/
/* ��������α�������                                                   */
/*��ⱨ��http://www.cnblogs.com/LCCRNblog/p/4392273.html               */
/************************************************************************/
 
class Solution {
public:
    vector<int> rightSideView(TreeNode *root) {
		queue<TreeNode *> myQue;
		vector<int> res;		
		res.clear();

		if (NULL == root)
		{
			return res;
		}
		
		myQue.push(root);
		myQue.push(NULL);
		TreeNode *temp1,*temp2;

		while (true)
		{
			temp1 = myQue.front();
			myQue.pop();
			temp2 = myQue.front();
			//myQue.pop();
			if(NULL == temp1 && NULL == temp2)
				break;
			if(NULL == temp1)
			{
				myQue.push(NULL);//Ϊ��һ����ӱ��
				continue;

			}
			if (NULL == temp2)//��ȡ��һ��ָ�룬�ж��Ƿ��Ǳ��NULL
			{
				res.push_back(temp1->val);//�������ұߵ�ֵ
			}			
			
			if(NULL != temp1->left)
				myQue.push(temp1->left);
			if (NULL != temp1->right)
			{
				myQue.push(temp1->right);
			}
		}
		return res;        
    }
};