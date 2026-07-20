class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int j = n-1;
        int i=0;
        while(i<j){
            if(isalnum(s[i])){
                if(isalnum(s[j])){
                    if(tolower(s[i])!=tolower(s[j])){
                        return false;
                    }
                    else{
                        i++;
                        j--;
                    }
                }
                else{
                    j--;
                }
            }
            else{
                i++;
            }
        }
    return true;
    }
};