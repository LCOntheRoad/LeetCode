/*解题报告http://www.cnblogs.com/LCCRNblog/p/4392402.html*/

class Solution {
public:
    int trailingZeroes(int n) 
	{
        int counter=0;  //the counter!
		int k=n;
	 
		 while(k>=5)
		 {
			k=k/5;
			counter+=k;
		 }
	 
		return counter;
	}
};