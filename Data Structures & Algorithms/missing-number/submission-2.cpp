class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(;i<n;i++){
            if(i!=nums[i]) return i;
        }
        return i;
    }
};
