/************************************************************************/
/* �����Ѱ�����м���Ǹ�������                                         */
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