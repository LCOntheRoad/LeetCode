/************************************************************************/
/* 解题报告:http://www.cnblogs.com/LCCRNblog/p/4375922.html             */
/************************************************************************/
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int res=0;
		int length = s.length();
		if (0 == length)
		{
			return 0;
		}
		int i=0,j=1;
		int index[256];
		memset(index,-1,sizeof(index));
		index[s[0]]=0;
		while (i<j&&j<length)//"abcabcbb"
		{
			if(-1 == index[s[j]])
			{
				index[s[j]]=j;	

			}
			else
			{
				if(j-i>res)res = j-i;
				while(true)
				{
					if (s[i]!=s[j])
					{
						index[s[i]]=-1;
						i++;						
					}else
						break;
					
				}
				i++;
			}
			j++;


		}
		if(j-i>res)res = j-i;
		return res;
	}
};
