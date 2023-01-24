class Solution {
public:
    string truncateSentence(string s, int k) {
  
  string temp,s1;
  int c=0;
        stringstream str(s);

        while(str>>temp){
            s1+=temp;
            c++;
            if(c==k) break;
            s1+=" ";
        }
        return s1;
        
        
    }
};