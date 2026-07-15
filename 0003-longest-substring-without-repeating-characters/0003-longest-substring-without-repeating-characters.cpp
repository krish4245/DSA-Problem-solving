class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        queue<char> q;

        int ans = 0;

        for(char ch : s){

            while(st.find(ch)!= st.end()){
            st.erase(q.front());
            q.pop();
            }

          q.push(ch);
          st.insert(ch);

          ans = max(ans, (int)q.size());

        }
        
        

        
        

        return ans;
    }
};