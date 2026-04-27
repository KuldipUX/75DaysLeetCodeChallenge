class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int k = 0; k < nums.size(); k++) {
            ans = ans ^ nums[k];
        }

        return ans;
    }
};
