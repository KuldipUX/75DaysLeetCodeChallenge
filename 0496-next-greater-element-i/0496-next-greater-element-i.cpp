class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int>nge;
        for(int x : nums2){
            while(!st.empty() && x > st.top()){
               nge[st.top()] = x;
               st.pop();
            }
            st.push(x);
        }
         while (!st.empty()) {
            nge[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        for (int x : nums1) {
            ans.push_back(nge[x]);
        }
         return ans;
    }
};//iss qquestion ka logic.  
//1) nums2 ki har value k liye greter elment map me store kara do aur jiske liye exist nahi karta uakw liye -1 kara do. 
//2) ans vector me return kara by ppushing the map values using values of nums1 as key to map.
//  isme stak use kar rahe hai. stack k top ko compare karte num2 k next iteration k elment se agar greater hai to map me daalo x ki vale k sathas akey value pair and then pop kar do. 
//jin vakues k liye stack ka top empty nahi ila aur un values k liye top smaller hai to -1 map x ki value ka sath  key value pair me map me daal do aur fir top ko pop kar do. 