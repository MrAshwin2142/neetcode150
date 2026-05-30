class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        if(n==4) return false;
        int ans=0;
        while(n){
            int t=n%10;
            ans += (t*t);
            n/=10;
        }
        return isHappy(ans);
    }
};
