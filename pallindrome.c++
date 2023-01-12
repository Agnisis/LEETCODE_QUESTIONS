class Solution {
public:
    bool isPalindrome(int x) {
        long long temp,digit,rev=0;
        temp=x;
        while(x>0)
        {
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
        }

        if(rev==temp)
        return true;
        else 
        return false;
        
        
    }
};