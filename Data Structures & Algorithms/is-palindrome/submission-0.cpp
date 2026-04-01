class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i= 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') ){
               temp.push_back(s[i]);
            }
        }
        cout << temp;
        int r = 0, l = temp.length()-1;
        while(r < l){
            if(temp[r] != temp[l]){
                return false;
            }
            r++;
            l--;
        }
        return true;
    }
};
