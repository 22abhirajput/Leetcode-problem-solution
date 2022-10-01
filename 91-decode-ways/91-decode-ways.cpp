class Solution {
public:
	int f(int i,string& s,int n,vector<int>& dp){
		if(i>n) return 0;
		if(i==n) return 1;
		if(dp[i]!=-1) return dp[i];
		int one=0,two=0;
		if(s[i]!='0'){
			one=f(i+1,s,n,dp);
			string str;
			str+=s[i];
			str+=s[i+1];
			if(stoi(str)<=26) two=f(i+2,s,n,dp);
		}
		return dp[i]=one+two;
	}

	int numDecodings(string s) {
		int n=s.size();
		vector<int> dp(n,-1);
		return f(0,s,n,dp);
	}
};