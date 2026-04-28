class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(count == 0){//support khatam hone par count zero ho jayega to humko next nums[i] ko candidate banakar usko hi first votedena hoga that's why count++ in nums[i]==candidate.
                 candidate = nums[i];
            }
            if(nums[i]==candidate){
                 count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};