class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        priority_queue<pair<int,int>> pq;
        for (auto it:freq){
            pq.push({it.second,it.first});//{frequency,number}
        }
        vector<int>result;
        for(int i=0;i<k;i++){
              result.push_back(pq.top().second);//value le li hai
            pq.pop();//remove kar do 
        }

        return result;
    }
};