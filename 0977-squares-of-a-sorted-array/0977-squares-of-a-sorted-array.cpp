class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //ek vector return kara dete ha answer k liye
        //Brute force me phele square nikal lo then usko sort kar do 
        for(int i = 0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};