/************************************************************************/
/* ����˼����ǽ���������ѭ������k����λ                                */
/************************************************************************/

class Solution {
public:
	void rotate(int nums[], int n, int k) {
		int i,temp1,temp2,index=0;
		int *flag;
		flag = new int[n];
		memset(flag,0,sizeof(flag));
		for (i=0;i<n;i++)
		{
			index =(i+k)%n;
			flag[index]=nums[i];
		}
		for (i=0;i<n;i++)
		{
			nums[i]=flag[i];
		}
	}
};