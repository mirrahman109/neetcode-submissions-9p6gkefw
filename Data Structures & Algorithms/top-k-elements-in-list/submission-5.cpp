class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<int>result;
        priority_queue<pair<int,int>>pq;

        for(auto i: nums){
            mp[i]++;
        }
        
        for(auto i: mp){
            pq.push({i.second, i.first});
        }

        for(int i = 0; i < k; i++){
            result.push_back(pq.top().second);
            pq.pop();
        }

        
        return result;
    }
};
