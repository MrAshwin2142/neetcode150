class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i;j<n;j++){
                if(t[i]<t[j]) {ans[i]=c; break;}c++;
            }
        }
        return ans;
    }
};
