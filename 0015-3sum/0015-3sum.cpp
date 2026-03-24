class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
       sort(nums.begin(),nums.end());
int n = nums.size();
       for(int i =0; i<n-2; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int ans = -nums[i];//X-nums[i]-->> X = 0
        int start = i+1;
        int end = n-1;
        while(start<end){
            if(nums[start]+nums[end]==ans){
             result.push_back({nums[i],nums[start],nums[end]});
             
             start++;
             end--;

             while(start < end && nums[start] == nums[start-1]) start++;
while(start < end && nums[end] == nums[end+1]) end--;
            }
            else if(nums[start]+nums[end]>ans){
                end--;
            }
            else start++;
        }
       }
       return result;
    }
};