class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp1;
        vector<pair<int,int>> freq;
        vector<int> ans(k);
        for(int i:nums) mp1[i]++;
        for(auto i:mp1) freq.push_back(i);
        sort(freq.begin(),freq.end(),[](pair<int,int> a,pair<int,int> b){
            return a.second>b.second;
        });
        for(int i=0;i<k;i++){
            ans[i]=freq[i].first;
        }
        return ans;
    }
};
