class Solution {
public:
    bool equalFrequency(string word) {
        int freq[26] = {0};
        int maxFreq = 0;
        for(char c : word){
            freq[c - 'a']++;
            maxFreq = max(maxFreq, freq[c - 'a']);
        }
        int maxCount = 0;
        int maxMinusOneCount = 0;

        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0) continue;
            if(freq[i] == maxFreq) maxCount++;
            if((freq[i] == maxFreq - 1)) maxMinusOneCount++;
            if(freq[i] < maxFreq - 1) return false;

        }
        return maxMinusOneCount == 1 || maxCount == 1 || (maxMinusOneCount == 0 && maxFreq == 1);
    
    }


};