class Solution {
public:
    int maxArea(vector<int>& h) {
        int mx=0;
        int n=h.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mx = max(mx, min(h[i],h[j])*(j-i));
            }
        }
        return mx;
    }
};
