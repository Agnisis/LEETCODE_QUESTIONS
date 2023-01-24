
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
int a;

        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
          a=nums[i]*nums[i];
          ans.push_back(a);
        }
        sort(ans.begin(),ans.end());

        return ans;
    }
};