/************************************************************************/
/* �ص��ǿ��Ƿ�Χ                                                       */
/************************************************************************/
class Solution {
public:
	int atoi(string str) {
		int index=0;
		int flag = 1;
		long long res=0;
		if(str.length()==0)return 0;
		while (str[index]==' ')//ȥ���հ�
			index++;

		if(str[index] == '-')//����
		{
			flag = -1;
			index++;
		}
		else if(str[index] == '+')//����
		{
			flag = 1;
			index++;
		}
		int len = str.length();
		while (str[index]>='0'&&str[index]<='9')
		{
			res = res * 10 +str[index]-'0';
			if(res > INT_MAX)
				return flag>0 ? INT_MAX:INT_MIN;
			index++;
		}

		return res*flag;
	}
};
