class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }

        int ans = 0;

        for(int i = 0; i < n; i++){
            if(s.count(nums[i]-1)) continue;
            int j = nums[i]+1;
            while(s.count(j)) j++;
            ans = max(ans, j-nums[i]);
        }

        return ans;
        
    }
};
