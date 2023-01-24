class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      set<int>s;
      int k;
      for(int i=0;i<nums.size();i++)
    {
        s.insert(nums[i]);
    }                        
    nums.erase(nums.begin(),nums.end());
    for(auto a: s){
        nums.push_back(a);
    }  

    return nums.size();          
    }
};