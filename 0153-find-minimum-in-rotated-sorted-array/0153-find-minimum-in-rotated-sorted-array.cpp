class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size()-1;
        int l = 0; int r = n;
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid]>nums[r]){
                //right side me hai minimum
                l = mid+1;
            }
            else{
                //left me hai
                r = mid;
            }
        }
        return nums[l];
    }
};