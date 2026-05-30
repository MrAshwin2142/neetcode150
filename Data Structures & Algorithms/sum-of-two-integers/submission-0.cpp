class Solution {
public:
    int getSum(int a, int b) {
        while(b){
            int t=(a&b)<<1;
            a=a^b;
            b=t;
        }
        return a;
    }
};
