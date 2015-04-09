class Solution {
  public:
	  string addBinary(string a, string b) {
		  int lenA,lenB;
		  lenA = a.length();
		  lenB = b.length();
		  string res="";
		  

		  if (0 == lenA)
		  {
			  return b;
		  }
		  if (0 == lenB)
		  {
			  return a;
		  }
		  int ia=lenA-1,ib=lenB-1;
		  int count=0,temp;//½øÎ»
		  char c;
		  while (ia>=0&&ib>=0)
		  {
			  temp = a[ia]-'0'+b[ib]-'0'+count;
			  count = temp/2;
			  c = temp%2+'0';
			  res = c+res;
			  ia--;
			  ib--;
		  }

		  while (ia>=0)
		  {
			  temp = a[ia]-'0'+count;
			  count = temp/2;
			  c = temp%2+'0';
			  res = c+res;
			  ia--;
		  }

		  while (ib>=0)
		  {
			  temp = b[ib]-'0'+count;
			  count = temp/2;
			  c = temp%2+'0';
			  res = c+res;
			  ib--;
		  }
		  if(count != 0)
		  {
    		  c=count+'0';
    		  res = c+res;
		  }
		  return res;

	  }
  };