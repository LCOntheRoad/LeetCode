/************************************************************************/
/* 用队列来求杨辉三角                                                   */
/************************************************************************/

class Solution {
public:
	vector<vector<int> > generate(int numRows) {
		vector<vector<int> > res;
		res.clear();
		vector<int> temp;
		queue<int> myQue;
		int val;

		if (0 == numRows)
		{
			return res;
		}

		int i,j,left,right;

		temp.push_back(1);
		res.push_back(temp);
		if (1 == numRows)
		{
			return res;
		}
		temp.clear();
		temp.push_back(1);
		temp.push_back(1);
		res.push_back(temp);


		myQue.push(1);
		myQue.push(1);
		for (i=3;i<=numRows;i++)
		{
			temp.clear();
			temp.push_back(1);
			myQue.push(1);

			left = myQue.front();
			myQue.pop();
			j=2;

			while (j<i)
			{
				right = myQue.front();
				myQue.pop();
				temp.push_back(left+right);
				myQue.push(left+right);
				left = right;
				j++;
			}
			temp.push_back(1);
			myQue.push(1);
			res.push_back(temp);
		}
		return res;

	}
};