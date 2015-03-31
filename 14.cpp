/************************************************************************/
/* 这道题的第一解题思路就是最终解题方案                                 */
/************************************************************************/

class Solution {
public:
	string longestCommonPrefix(vector<string> &strs) {
		int length = strs.size();
		string result="";
		int index=0,i;
		char temp;
		bool flag=true;
		if(0 == length)
			return "";
		while(flag)
		{
			temp=strs[0][index];

			for (i=0;i<length;i++)
			{
				if (index>=strs[i].length() ||strs[i][index] != temp)
				{
					flag=false;
					break;
				}

			}
			if(i==length)
				result += temp;
			index++;

		}
		return result;
	}
};