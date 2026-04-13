class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int count = 0;
        int maxi = 0;
        if(nums.size() == 0) return 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - nums[i-1] == 1){
                count++;
                maxi = max(maxi,count);
            } 
            else count = 0;
        }

        return maxi+1;
    }
};
