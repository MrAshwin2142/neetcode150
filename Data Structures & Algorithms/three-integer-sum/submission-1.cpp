class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> st;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            map<int,int> mp;
            for(int j=i+1;j<n;j++){
                int t=nums[i]+nums[j];
                if(mp.find(-t)!=mp.end()) {
                    vector<int> v={nums[i],nums[j],-t};
                    sort(v.begin(),v.end());
                    st.insert(v);
                }
                mp[nums[j]]=j;
            }
        }
        for(auto i:st) ans.push_back(i);
        return ans;
    }
};
