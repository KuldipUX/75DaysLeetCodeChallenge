class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int Max = nums[0];
        int index =0;
        for(int i =0 ; i<n;i++){
            if(nums[i]>Max){//constant time operation hai o(1).
                 Max = max(Max,nums[i]);
                 index = i;
            }
        
         
        }
        return index;
    }
};//time complexity : O(n)*O(1) = O(n)..