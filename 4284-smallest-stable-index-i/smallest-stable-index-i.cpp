class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mx = INT_MIN;
        int ind =INT_MAX;
        for(int i = 0 ; i <nums.size();i++){
            mx = max(nums[i],mx);
            int mn = nums[i];
            for(int j = i ;j < nums.size();j++){
                mn = min(nums[j],mn);
            }
            if(mx-mn <= k){
                ind = min(i,ind);
            }
        }
        return ind == INT_MAX ? -1 : ind;
    }
};