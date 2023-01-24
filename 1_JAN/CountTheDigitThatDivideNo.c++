class Solution {
public:
    int countDigits(int num) {


        int digit,temp,c=0;
        temp=num;
        while(temp>0)
        {  
            digit=temp%10;
            if(num%digit==0)
            {
                c++;
            }
            temp=temp/10;
        }

        return c;
        
    }
};
