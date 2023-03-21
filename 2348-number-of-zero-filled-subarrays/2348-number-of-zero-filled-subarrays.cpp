
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0;
        int i =0;
        while(i<nums.size()){
            if(nums[i]!= 0){
                i++;
                continue;
           }
        
        
        int j = i;
        int count =0;
        while(j<nums.size() && nums[j] == 0){
            j++;
            count++;
        }
        res += (count * 1ll * (count+1))/2ll;
         
        i =j;
         
        }
         return res;
    }
};