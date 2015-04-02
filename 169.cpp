/************************************************************************/
/* 排序后寻找最中间的那个数即可                                         */
/************************************************************************/
class Solution {
public:
	int majorityElement(vector<int> &num) {
		vector<int> temp = num;
		sort(temp.begin(),temp.end());
		int length = temp.size();
		
		return temp[length/2];
		
	}
};