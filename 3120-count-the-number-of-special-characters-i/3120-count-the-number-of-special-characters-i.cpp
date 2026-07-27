class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> st;
        int count = 0;
       

        for(char c:word){
            st.insert(c);
            
        }

        for(char c = 'a'; c<='z' ;c++){
            if(st.count(c) && st.count(toupper(c))){
                count++;
            }
        }

        return count;
       
        
    }
};