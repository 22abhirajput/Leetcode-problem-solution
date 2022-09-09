class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        sort(prop.begin(),prop.end(),comp);
        int maximum_at_that_point= INT_MIN;
        int ans=0;
        for(auto d:prop){
            if( maximum_at_that_point>d[1]) ans++;
            else maximum_at_that_point=d[1];
        }
        return ans;
    }
};