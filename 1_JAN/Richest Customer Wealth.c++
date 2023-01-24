class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=-1;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                  sum=sum+accounts[i][j];

            }
                      maxi=max(sum,maxi);
        }
        return maxi;
        
    }
};