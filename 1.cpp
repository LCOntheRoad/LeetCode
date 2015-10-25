/************************************************************************/
/*解题报告http://www.cnblogs.com/LCCRNblog/p/4369257.html             */
/************************************************************************/

class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		vector<int> result;
		result.clear();
		map<int,int> myMap;
		
		int i,temp;
		int length = numbers.size();
		map<int,int>::iterator it;
		myMap.insert(pair<int,int>(numbers[0],0));
		for (i=1;i<length;i++)
		{
			temp = target - numbers[i];
			it = myMap.find(temp);
			if (it!=myMap.end())
			{
				result.push_back(it->second+1);
				result.push_back(i+1);
				break;
			}
			myMap.insert(pair<int,int>(numbers[i],i));
		}
		
		return result;

	}
	
};