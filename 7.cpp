/************************************************************************/
/*这道题主要考察int范围-2147483648~2147483647，不能越界         */
/************************************************************************/

class Solution {
public:
	int reverse(int x) {
		int res=0,temp=x,i,j;
		int flag=1;
		if (x<0&&x!=-2147483648)
		{
			temp = 0-temp;
			flag=-1;
		}
		if (x==-2147483648)
		{
			return 0;
		}
		
		while(temp)//1534236469
		{
			i=temp%10;
			if(res>214748364)return 0;
			res = res * 10 + i;
			temp/=10;
		}
		if (res>(int)pow(2.0,32)-1)
		{
			return 0;
		}
		res = flag * res;
		
		return res;

	}
};