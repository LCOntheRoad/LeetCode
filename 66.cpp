/************************************************************************/
  /* 这道题主要学会vector的插入操作insert                                 */
  /************************************************************************/

  class Solution {
  public:
	  vector<int> plusOne(vector<int> &digits) {
		  // IMPORTANT: Please reset any member data you declared, as
		  // the same Solution instance will be reused for each test case.
		  int a = 1;
		  vector<int> ans;
		  vector<int>::iterator it;
		  for(int i = digits.size() - 1;i >= 0;i--)
		  {
			  it = ans.begin();
			  int b = (a + digits[i]) % 10;
			  a = (a + digits[i]) / 10;
			  ans.insert(it, b);
		  }
		  if(a != 0)
		  {
			  it = ans.begin();
			  ans.insert(it, a);
		  }

		  return ans;
	  }
  };