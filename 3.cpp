class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		set<char> mySet;
		mySet.clear();
		int ascii[256];
		memset(ascii,0,sizeof(ascii));
		int length = s.length();
		int subLen=0,temp=0;
		for (int i=0;i<length;i++)//tmmzuxt
		{
			if(mySet.find(s[i])==mySet.end())
			{
				temp++;
				mySet.insert(s[i]);
			}
			else
			{
				if(temp>subLen)subLen=temp;
				temp=ascii[s[i-1]]-ascii[s[i]]+1;
				mySet.clear();
				mySet.insert(s[i]);
			}
			ascii[s[i]]=temp;
		}
		if(temp>subLen)subLen=temp;
		return subLen;

	}
};