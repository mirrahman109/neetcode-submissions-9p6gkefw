class Solution {
public:
    string encode(vector<string>& strs) {
        string res = "";

        for (string i : strs) {
            res += to_string(i.size()) + '#' + i;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            string num = "";

            while (s[i] != '#') {
                num += s[i];
                i++;
            }

            int len = stoi(num);
            i++; // skip '#'

            string word = "";

            for (int j = 0; j < len; j++) {
                word += s[i];
                i++;
            }

            ans.push_back(word);
        }

        return ans;
    }
};