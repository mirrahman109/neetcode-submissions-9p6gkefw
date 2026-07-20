class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>ch;

        
        int a, b;

        for(auto i : tokens){

            if(i != "+" &&i != "-" &&i != "*" &&i != "/"){
               ch.push(std :: stoi(i));
            }

            else{
                b = ch.top();
                ch.pop();
                a = ch.top();
                ch.pop();

                if(i == "+") ch.push(a + b); 
                else if(i == "-") ch.push(a - b); 
                else if(i == "*") ch.push(a * b); 
                else if(i == "/") ch.push(floor(a / b)); 
            }
            
        }

        return ch.top();
    }
};
