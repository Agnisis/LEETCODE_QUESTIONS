class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int>newno;
        int temp,counter;
        for(int i=0;i<nums.size();i++)
        {   
          temp=nums[i];
          counter=0;
           for(int j=0;j<nums.size();j++)
           {
            if(nums[j]<temp && j!=i)
            {
                  counter ++;
            }

           }
           
           newno.push_back(counter);
        }
        return newno;
        
    }
};