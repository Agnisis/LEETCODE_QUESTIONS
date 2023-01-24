class Solution {
public:
    int maximum69Number (int num) {

       int max;
        string number=to_string(num);
        string nums;
        nums=number;
         max=num;
        
        for(int i=0;(i<number.size());i++)
        {     
            number=nums;
            if(number[i]=='6') 
            number[i]='9';
            else
            number[i]='6'; 
            if( max<stoi(number))
            max=stoi(number);
        }

        return max;
        
        
    }
};