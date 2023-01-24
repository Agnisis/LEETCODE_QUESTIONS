class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int sum,t=0;
       sum=(nums.size()*(nums.size()+1))/2;

       for(int i=0;i<nums.size();i++){
          t=t+nums[i];
       }
       return sum-t;
    }
};


