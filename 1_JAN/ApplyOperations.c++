class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
int c=0;
vector<int>a;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
                i++;
            }

        }
for(int i=0;i<nums.size();i++)
{
            if(nums[i]!=0) 
                a.push_back(nums[i]);
            else c++;
}


for(int i=0;i<c;i++)

{
    a.push_back(0);
}

return a;


        

        
        
    }
};