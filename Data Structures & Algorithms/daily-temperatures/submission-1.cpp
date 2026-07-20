class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
       int n = temperatures.size();
       stack<int>s;
       vector<int>ans(n,0);

   
       for(int i = 0; i < n; i++){

            while(!s.empty() && temperatures[i] > temperatures[s.top()] ){

                int previous = s.top();
                s.pop();

                ans[previous] = i - previous;
            }
            s.push(i);
       }

       return ans; 
        
    }
};
