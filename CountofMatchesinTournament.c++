class Solution {
public:
    int numberOfMatches(int n) {
  int m,tot=0;
       while(n>=2)
       {
           if(n%2==0)
           {
              m=n/2;
              n=m;
              tot=tot+m;
           }
           else if(n%2!=0) 
           {  
               m=(n-1)/2;
              n=m+1;
              tot=tot+m;

           }
       }
       return tot;
        
    }
};