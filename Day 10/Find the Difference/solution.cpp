class Solution {
public:
    char findTheDifference(string s, string t) {
        int counts[26] = {0};

        for(char c:s){
            counts[c-'a']++;
        }

        for(char c:t){
            counts[c-'a']--;
            if(counts[c-'a']<0){
                return c;
            }
        }
        return ' ';
    }
};