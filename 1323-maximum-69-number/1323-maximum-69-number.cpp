class Solution {
public:
    int maximum69Number (int num) {
        
        string  newnum = to_string(num);
        
        for(auto &x : newnum){
            if(x == '6'){
                x = '9';
                break;
            }
                
        }
       
        return stoi(newnum);
        
    }
};