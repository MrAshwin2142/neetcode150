class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mxprofite=0;
        int buy=prices[0];
        for(int i=0;i<n;i++){
            if(buy>prices[i]) buy=prices[i];
            mxprofite= max(mxprofite, prices[i]-buy);
        }
        return mxprofite;
    }
};
