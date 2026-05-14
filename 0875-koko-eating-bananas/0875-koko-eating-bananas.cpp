class Solution {
public:
    bool canEat(vector<int>& piles,int h,int k){
            long long hours = 0;
            for(int pile : piles){
                hours+=pile/k;
                if(pile % k!=0){
                    hours++;
                }
            }
            return hours<=h;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ;
        int high =*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            if(canEat(piles,h,mid)){
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    
    }
};