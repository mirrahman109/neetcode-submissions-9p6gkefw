class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;

        for(auto i : strs){
            string sorted = i;
            sort(sorted.begin(), sorted.end());
            mp[sorted].push_back(i);
        }

        vector<vector<string>>vv;
        for(auto pair: mp){
            vv.push_back(pair.second);
        }

        return vv;
    }
};
