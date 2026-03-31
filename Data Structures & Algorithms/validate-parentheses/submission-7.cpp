class Solution {
public:
    bool isValid(string s) {
        stack<int> k;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                k.push(s[i]);
            }
            else {
                if(k.empty()){
                    return false;
                }
                char temp = k.top();
                if (temp == '(' && s[i] == ')' || temp == '{' && s[i] == '}' || temp == '[' && s[i] == ']') {
                    k.pop();
                }
                else {
                    return false;
                }
            }
        }
        return k.empty();
    }
};