class Solution {
public:
    bool isValid(string s) {
        stack<char>ss;
        for(char i: s){
           
            if(i == '(' || i == '{' || i == '[' ){
                ss.push(i);
            }
            else {
                if (ss.empty()) return false;
                if( i == ')' && ss.top() == '('){
                    ss.pop();
                }
                else if( i == '}' && ss.top() == '{'){
                    ss.pop();
                }
                else if( i == ']' && ss.top() == '['){
                    ss.pop();
                }
                else return false;

            }
        }

        return ss.empty();
    
    }
};
