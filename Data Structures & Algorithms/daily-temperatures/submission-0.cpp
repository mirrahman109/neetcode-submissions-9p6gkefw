class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int>v(n,0);

        for(int i = 0; i < n; i++){
            int j = i + 1;

            while( j < n){
                if(temperatures[j] > temperatures[i]){
                    v[i] = j-i;
                    break;
                }
                else{
                    j++;
                }
            }
        }

        return v;    
        
        
        
    }
};
