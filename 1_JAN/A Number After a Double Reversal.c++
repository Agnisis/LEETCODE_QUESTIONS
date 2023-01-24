class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int rev1=0,rev2=0,temp;
temp=num;
        while(temp!=0){
            // if(temp%10==0 && )  temp/=10;
            // else
             {rev1=rev1*10+temp%10;
            temp/=10;}
        }

        while(rev1!=0){
            // if(rev1%10==0) rev1/=10;
            // else
             {rev2=rev2*10+rev1%10; rev1/=10;}
        }
        

        if(num==rev2) return true;
        else return false;
    }
};








class Solution {
public:
    bool isSameAfterReversals(int num) {
        
//         int rev1=0,rev2=0,temp;
// temp=num;
//         while(temp!=0){
//             // if(temp%10==0 && )  temp/=10;
//             // else
//              {rev1=rev1*10+temp%10;
//             temp/=10;}
//         }

//         while(rev1!=0){
//             // if(rev1%10==0) rev1/=10;
//             // else
//              {rev2=rev2*10+rev1%10; rev1/=10;}
//         }
        

//         if(num==rev2) return true;
//         else return false;

if(num==0) return true;
else if(num%10==0) return false;
else return true;
    }
};