class Solution {
    public boolean equalFrequency(String word) {
        int[] f = new int[26];
        int maxFreq = 0;
        for(char c : word.toCharArray()){
            f[c - 'a']++;
            maxFreq = Math.max(maxFreq, f[c - 'a']);
        }
        int maxCount = 0;
        int maxMinusOneCount = 0;

        for(int i = 0; i < 26; i++) {
            if(f[i] == 0) continue;
            if(f[i] == maxFreq) maxCount++;
            if((f[i] == maxFreq - 1)) maxMinusOneCount++;
            if(f[i] < maxFreq - 1) return false;

        }
        return maxMinusOneCount == 1 || maxCount == 1 || (maxMinusOneCount == 0 && maxFreq == 1);
    }
}
