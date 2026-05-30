class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int t=32;
        // return n;
        uint32_t a = 0;
        while(t--){
            // cout<<a<<endl;
            int i=n%2;
            a=a*2+i;
            n=n>>1;
        }
        return a;
    }
};
