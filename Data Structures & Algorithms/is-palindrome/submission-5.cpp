class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        bool flag = true;
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });

        while(i < j){
            if(!isalnum(s[i])){
              i++;
              continue;  
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(s[i] != s[j]){
                
                return false;
            }
            i++;
            j--;

        }

       return true;
    }
};
