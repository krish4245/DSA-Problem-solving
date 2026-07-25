class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int blank = 0;

        for(char c :moves){
            if(c == 'L'){
                left++;
            }else if(c == 'R'){
                right++;
            }else{
                blank++;
            }
        }

        return abs(left - right) + blank;
        
    }
};