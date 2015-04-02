/************************************************************************/
/* 26进制，需要注意的是没有从0开始                                      */
/************************************************************************/

class Solution {
public:
	int titleToNumber(string s) {
		int res=0;
		int len=s.length();
		for (int i=0;i<len;i++)
		{
			res = res*26+s[i]-'A'+1;
		}

		return res;
	}
};