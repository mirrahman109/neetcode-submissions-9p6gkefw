class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int i = 0;
        int j = i + 1;
        int n = numbers.size();
        vector<int>result;

        while(i < j){
            if(numbers[i] != numbers[j]){
                if(numbers[i]+numbers[j] == target){
                    result.push_back(i+1);
                    result.push_back(j+1);
                    break;
                }
                else{
                    if(j == n-1){
                        i++;
                        j = i+1;
                    }
                    else{
                        j++;
                    }
                }
            }
            else{
                i++;
                j++;
            }

        }

        return result;
        
    }
};
