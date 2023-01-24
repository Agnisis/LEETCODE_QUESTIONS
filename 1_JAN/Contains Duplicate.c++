class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n=nums.size();

        set<int>s1(nums.begin(),nums.end());

        int m=s1.size();

        if(n==m) return false;
        else return true;
        
    }
};