class Solution {
public:
    int subtractProductAndSum(int n) {

        int digit,sum=0,pro=1;

        while(n!=0)
        {
            digit=n%10;
            sum=sum+digit;
            pro=pro*digit;
            n=n/10;

        }
        return pro-sum;
        
    }
};