class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int start = 0;
        
        int n = nums.size();
        int end = n-1;
        //first index of first occurance k liye.
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){// ye to predestined hai ki kabhi kabhi to match hoga aur ye conditon hit hogi.
                first = mid;
                //left side check karenge ki kahi iss se pehle aur target value present to nahi hai.
                end = mid-1;
            }
            else if (nums[mid]<target){
                //right side shit kargenge start ko
                start = mid + 1;
                
            }
            else {
                //left side chalenge
                end = mid -1;
            }
        }
        //reset start and send values .
        start = 0; end = n-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid]==target){
                last = mid;
                //right side check karenge
                start = mid + 1;

            }
            else if(nums[mid]>target){
                //left me check karenge
                end = mid - 1;
            }
            else {
                //nums[mid]<target isilye right me jayenge
                start = mid + 1;
            }
        }
        return {first,last};
    }
};