/************************************************************************
当nRows=7时：
0            12                 24
1         11 13              23
2       10   14           22
3     9      15        21
4   8        16     20
5 7          17  19
6            18
************************************************************************/
class Solution {
public:
	string convert(string s, int nRows) {
		if (nRows <= 1 || s.length() == 0)  
			return s;  
		int index=0,temp;
		string res="";
		int len = s.length();
		const int val = 2*nRows-2;
		//注意第一行和最后一行的规律
		for (index = 0;index<nRows&&index<len;index++)//注意当nrows>len时
		{
			temp = index;
			res+=s[temp];
			while (temp<len)
			{				
				temp = temp + val;
				if(index== 0||index == nRows-1)
				{
					if (temp<len)
					{
						res+=s[temp];
						continue;
					}
					break;
					
					
				}
				else
				{
					temp = temp-2*index;
					if (temp<len)
					{						
						res+=s[temp];
					}
					else
						break;
					temp = temp+2*index;
					if (temp<len)
					{
						res+=s[temp];
					}
					else
						break;
					
				}
			}

		}
		return res;

	}
};