class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; // position to place next non-zero

        // Move all non-zero elements forward
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[k] = nums[i];
                k++;
            }
        }

        // Fill remaining positions with 0
        while(k < nums.size()) {
            nums[k] = 0;
            k++;
        }
    }
};
