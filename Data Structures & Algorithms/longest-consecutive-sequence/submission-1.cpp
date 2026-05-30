class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=1;
        int mx=0;
        int n=nums.size();
        if(n<2) return n;
        int pvs=nums[0];
        for(int i=1;i<n;i++){
            mx=max(mx,ans);
            if(nums[i]==pvs) continue;
            if(nums[i]==nums[i-1]+1)ans++;
            else ans=1;
            pvs=nums[i];
        }
        return max(mx,ans);
    }
};
