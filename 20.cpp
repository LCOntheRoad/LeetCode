class Solution {
public:
	bool isValid(string s) {
		stack<char> myStack;
		int len = s.length();
		int i=0;
		if (len<=0)
		{
			return true;
		}
		char temp;
		for(i = 0;i<len;i++)
		{
			if ('(' == s[i])
			{
				myStack.push('(');
				continue;
			}
			else if ('[' == s[i])
			{
				myStack.push('[');
				continue;
			}
			else if ('{' == s[i])
			{
				myStack.push('{');
				continue;
			}

			if (myStack.empty())
			{
				return false;
			}

			temp = myStack.top();
			myStack.pop();

			if ('(' == temp && ')' == s[i])
			{
				continue;				
			}
			else if ('[' == temp && ']' == s[i])
			{
				continue;				
			}
			else if ('{' == temp && '}' == s[i])
			{
				continue;				
			}
			else
				return false;

		}
		if (myStack.empty())
		{
			return true;
		}
		else
			return false;

	}
};