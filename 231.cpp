class Solution {
public:
	bool isPowerOfTwo(int n) {
		bitset<32> myset(n);
		if (n<=0)
		{
			return false;
		}

		if (1==myset.count() || 0==myset.count())
		{
			return true;
		}

		return false;


	}
};