class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int sum1 =0,sum2=0;
        int temp;
        for(int i=0;i<nums.size();i++)
        {
            sum1=sum1+nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {  
            temp=nums[i];
            if(temp<=9) sum2=sum2+temp;
            else
              {while(temp!=0)
              {
                  sum2=sum2+temp%10;
                  temp=temp/10;
              }
              }
        }
        return abs(sum1-sum2);
        
    }
};