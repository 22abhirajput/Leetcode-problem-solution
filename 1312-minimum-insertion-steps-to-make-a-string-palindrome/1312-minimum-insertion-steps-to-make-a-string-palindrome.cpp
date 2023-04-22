class Solution {
public:
    vector<vector<int>> memo;
    int dp(string &s,int i,int j)
    {
        if(i>=j)							//Base case.
            return 0;
        if(memo[i][j]!=-1)					//Check if we have already calculated the value for the pair `i` and `j`.
            return memo[i][j];
        return memo[i][j]=s[i]==s[j]?dp(s,i+1,j-1):1+min(dp(s,i+1,j),dp(s,i,j-1));		//Recursion as mentioned above.
    }
    int minInsertions(string s) 
    {
        memo.resize(s.length(),vector<int>(s.length(),-1));
        return dp(s,0,s.length()-1);
    }
};