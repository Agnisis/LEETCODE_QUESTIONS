class Solution {
public:
    int lengthOfLastWord(string s) {
int i,count=0; 
 for(i=s.size()-1;i>=0;i--)
 
{
    if(s[i]!=' ')
    count ++;
    if(s[i]==' ')
       if(count>0) 
       {
       break;}
}
        return count;
    }
};