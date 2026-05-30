class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int nt=target-nums[i];
            int s=i+1;
            int e=n-1;
            while(s<=e){
                int mid=(s+e)/2;
                if(nums[mid]==nt) return {i+1,mid+1};
                else if(nums[mid]>nt) e=mid-1;
                else s=mid+1;
            }
        }
        return {0,0};
    }
};
