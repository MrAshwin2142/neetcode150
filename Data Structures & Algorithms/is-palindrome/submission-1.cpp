class Solution {
public:
    bool isPalindrome(string s) {
        string org="",rvs;
        int t='a'-'A';
        for(char i:s){
            if((i>='a' && i<='z') || (i>='0' && i<='9')) {org+=i;}
            else if((i>='A' && i<='Z')) {org+=(i+t);}
        }
        rvs=org;
        reverse(rvs.begin(),rvs.end());
        return org==rvs;
    }
};
