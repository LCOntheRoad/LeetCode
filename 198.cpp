/************************************************************************/
/* 这道题的本质相当于在一列数组中取出一个或多个不相邻数，使其和最大。
那么我们对于这类求极值的问题首先考虑动态规划Dynamic Programming来解，
我们维护一个一位数组dp，其中dp[i]表示到i位置时不相邻数能形成的最大和，
经过分析，我们可以得到递推公式dp[i] = max(num[i] + dp[i - 2], dp[i - 1]), 
由此看出我们需要初始化dp[0]和dp[1]，其中dp[0]即为num[0]，
dp[1]此时应该为max(num[0], num[1])，代码如下： 
*/
/************************************************************************/

class Solution {
public:
	int rob(vector<int> &num) {
		
		
		int len = num.size();
		if (num.size() <= 1) 
			return num.empty() ? 0 : num[0];
		vector<int> dp={num[0],max(num[0],num[1])};
		

		for (int i=2;i<len;i++)
		{
			dp.push_back(max(dp[i-1],dp[i-2]+num[i]));
		}

		return dp.back();

	}
};