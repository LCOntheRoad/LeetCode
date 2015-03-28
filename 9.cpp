class Solution {
public:
	bool isPalindrome(int x) {
		if (x == -2147483648)
		{
			return false;
		}
		if (x<0)
		{
			//x=0-x;
			return false;
		}
		int length = (int)log10(x*1.0)+1;//ÅÐ¶ÏxµÄÎ»Êý
		//int s[20];
		int temp1 = x;
		int temp2 = x;
		int middle = length/2;
		int i,j,left,right,power=length-1;
		for (i=1;i<=middle;i++)
		{
			left=temp1/(int)pow(10.0,power);
			temp1=temp1%(int)pow(10.0,power);
			power--;

			right = temp2%10;
			temp2 = temp2/10;
			if (left != right)
			{
				return false;
			}

		}
		return true;
	}
};