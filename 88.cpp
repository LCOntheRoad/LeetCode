 class Solution {
  public:
	  void merge(int A[], int m, int B[], int n) {

		  int i,j;
		  int index = m+n-1;

		  if (0 == n)
		  {
			  return ;
		  }

		  if (0 == m && 0 != n)
		  {
			  for (i=0;i<n;i++)
			  {
				  A[i]=B[i];
			  }
			  return ;
		  }

		  for(i=m-1,j=n-1;index>=0;)
		  {
			  if (A[i]>B[j])
			  {
				  A[index]=A[i];
				  i--;
			  }
			  else
			  {
				  A[index]=B[j];
				  j--;
			  }
			  index--;
			  if (j<0||i<0)
			  {
				  break;
			  }

		  }

		  if (i<0)
		  {
			  for (i=j;i>=0;i--)
			  {
				  A[index]=B[i];
				  index--;
			  }
		  }

	  }
  };
