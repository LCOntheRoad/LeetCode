/************************************************************************/
/* 用队列来求杨辉三角                                                   */
/************************************************************************/

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> res;
		queue<int> myQue;
		int val;
		int i,j,left,right;

		res.push_back(1);
		if (0 == rowIndex)
		{
			return res;
		}
		res.clear();
		res.push_back(1);
		res.push_back(1);
		if (1 == rowIndex)
		{
			return res;
		}

		res.clear();
		myQue.push(1);
		myQue.push(1);
		for (i=2;i<=rowIndex;i++)
		{
			myQue.push(1);

			left = myQue.front();
			myQue.pop();
			j=2;

			while (j<=i)
			{
				right = myQue.front();
				myQue.pop();
				myQue.push(left+right);
				left = right;
				j++;
			}
			myQue.push(1);
		}
		//for(i=0;i<=myQue.size();i++)
		while (!myQue.empty())//为什么不能用myQue.size(),因为myQue.size()会动态的改变
		{
			res.push_back(myQue.front());
			//cout << myQue.front()<<endl;
			myQue.pop();
		}
		return res;

	}
};