class Solution {
public:
    string defangIPaddr(string address) {
 string news;
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.') 
            
             {
             
             news.push_back('[');
             news.push_back('.');
             news.push_back(']');
        }
        else
        news.push_back(address[i]);
        }
        return news;
        
    }
};