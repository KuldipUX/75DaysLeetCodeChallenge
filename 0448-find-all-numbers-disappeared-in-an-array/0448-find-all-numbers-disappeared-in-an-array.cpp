class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n =  nums.size();
        unordered_set<int>st;
        for(int i=1;i<=n;i++){
            st.insert(i);
        }
        // remove numbers present in nums from the hashmap
        for(int i : nums){
            st.erase(i);
        }
        vector<int>ans;
        for(int i:st){
            ans.push_back(i);
        }
      return ans;
    }
};