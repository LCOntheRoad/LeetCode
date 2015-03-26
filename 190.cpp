/************************************************************************/
/* 二进制串倒置算法
需要注意给定的数据类型，如题目中的uint32_t，如果将result的类型改为int 
就不能acceped                  
/************************************************************************/

class Solution {
public:
	int reverseBits(uint32_t n) {
		uint32_t result=0;

		for(int i=1;i<=32;i++)
		{
			result<<=1;
			result = result|(n%2);
			n>>=1;
		}
		return result;
	}
};