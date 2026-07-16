class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int length = 0;
        bool wordstart = false;
        int i = n-1;

        while(i>= 0 && s[i] == ' '){
            i--;
        }

        while(i>= 0 && s[i] != ' '){
            wordstart = true;
            length++;
            i--;
        }
        return length;


    }
};