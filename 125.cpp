/************************************************************************/
/* 题目不难，需要考虑清楚所有的情况即可。                               */
/************************************************************************/

class Solution {
public:
	bool isalpha(char &c){
		if((c>='A'&&c<='Z')){
			c = c-'A'+'a';
			return true;
		}
		return (c>='a'&&c<='z') || (c>='0'&&c<='9');
	}
	bool isPalindrome(string s) {
		bool res = false;
		int len=s.length();
		int i=0,j=len-1;
		char temp1,temp2;
		while (i<=j)
		{
			if(!isalpha(s[i]))
			{
				i++;
			}
			else if(!isalpha(s[j]))
			{
				j--;
			}
			else
			{
				if(s[i] == s[j])
				{
					i++;
					j--;
				}
				else
				{
					res = false;
					break;
				}

			}
		}
		if(i>=j)
			res = true;

		return res;
	}
};