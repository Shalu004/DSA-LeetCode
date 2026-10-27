class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);    //push opening in stack
            } 
            else {
                if (st.empty()) return false;     //stack empty

                if( (st.top() == '(' && c == ')') || (st.top() == '{' && c == '}') || (st.top() == '[' && c == ']') ) {      //match found
                 st.pop();
                }

                else{
                    return false;  //no match found
                }

            }
        }
        return st.empty();
    }
};