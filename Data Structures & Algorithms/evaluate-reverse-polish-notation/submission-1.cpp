class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        set<string> st={"-","+","/","*"};
        for(string s:tokens){
            if(st.find(s)==st.end()) num.push(stoi(s));
            else{
                int l=num.top(); num.pop();
                int f=num.top(); num.pop();
                int r;
                if(s=="+") r=f+l;
                else if(s=="-") r=f-l;
                else if(s=="*") r=f*l;
                else r=f/l;
                num.push(r);
            }
        }
        return num.top();
    }
};
