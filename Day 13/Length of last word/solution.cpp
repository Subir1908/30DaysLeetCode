class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), i=n-1, j=n-1;
        while(j>=0){
            if(s[j]==' '){
                if(i>j){
                    break;
                }
                i=j-1;
                j--;
            }
            else{
                j--;
            }
        }
    return i-j;
    }
};