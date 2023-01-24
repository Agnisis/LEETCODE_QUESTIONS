class Solution {
public:
    int heightChecker(vector<int>& heights) {

         int c=0;

        vector<int>ans(heights);

        sort(ans.begin(),ans.end());
        for(int i=0;i<heights.size();i++)
        {
            if(ans[i]!=heights[i]) c++;
        }
            
            
            return c;   
        
    }
};