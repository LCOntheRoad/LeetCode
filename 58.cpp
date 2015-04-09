class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int len=strlen(s);
        int sum=0;
        while(s[len-1]==' ') len--;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]!=' ')   sum++;
            else break;
        }
        return sum;
    }
};