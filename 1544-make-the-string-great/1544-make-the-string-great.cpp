class Solution {
public:
    string makeGood(string s) {
        
        int count = 0;
        for(int i = 0; i<s.size();i++){
            if(count > 0  && abs(s[i]- s[count-1]) == 32)
                --count;
            else
                s[count++] = s[i];
        }
        
        return s.substr(0,count);
    }
};



