class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, n=s.length()-1;
        string ans = "";
        for(int j=0; j<=n; j++){
            if(s[j] >= 97 && s[j] <= 122) ans += s[j];
            else if(s[j] >= '0' && s[j] <= '9') ans += s[j];
            else if(s[j] >= 65 && s[j] <= 90){
                char ch = s[j]+32;
                ans += ch;
            }
            else continue;
        }
        string a = ans;
        reverse(a.begin(), a.end());
        if(ans != a) return false;
        else return true;
    }
};