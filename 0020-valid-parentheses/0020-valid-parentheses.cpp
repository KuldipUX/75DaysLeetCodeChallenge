class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }//closing brackets k liye
            else{
                 if (st.empty()) return false;
                 char top = st.top();// top character variable me stack ka top character daal diya hai
                  if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    st.pop();
                }
                 else {
                    return false;
                }
            }
            
            
        }
        return st.empty();
    }
};