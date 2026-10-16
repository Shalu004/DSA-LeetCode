class Solution {
public:
    string removeOuterParentheses(string& s) {
        int bal=0, j=0;
        for(char c: s){
            bal+=1-((c-'(')<<1);
            s[j]=c;
            j+=!(bal+c-'('==1);
        }
        s.resize(j);
        return s;
    }
};