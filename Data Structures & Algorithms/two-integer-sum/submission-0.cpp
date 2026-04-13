class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int r = 0;
        int l = 1;
        vector<int>v;

        while(r!=l){
            if(nums[r]+nums[l] == target){
                v.push_back(r);
                v.push_back(l);
                break;
            }
            else if(l == nums.size()-1){
                r++;
                l = r+1;
            }
            else{
                l++;
                
            }
        }

        return v;
    }
};
