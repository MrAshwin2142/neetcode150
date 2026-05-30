class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        vector<int> fr;
        for(int i:nums) st.insert(i);
        for(int i:st){cout<<i; fr.push_back(i);}
        int ans=1,mx=1;
        int n=fr.size();
        if(n<2)return n;
        for(int i=1;i<n;i++){
            if(fr[i]==fr[i-1]+1) ans++;
            else ans=1;
            mx=max(ans,mx);
        }
        return mx;
    }
};
