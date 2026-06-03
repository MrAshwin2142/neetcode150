class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2) return false;
        int p1=0,p2=0,p3=0;
        stack<char> st;
        for(char c:s){
            if(c=='(') st.push('(');
            else if(c=='{') st.push('{');
            else if(c=='[') st.push('[');
            else if(!st.empty() &&c==')' && st.top()=='(') st.pop();
            else if(!st.empty() &&c=='}' && st.top()=='{') st.pop();
            else if(!st.empty() &&c==']' && st.top()=='[') st.pop();
            else st.push(c);
        }
        return st.empty();
    }
};
