class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n<2) return n;
        int j=0;
        int ans=0;
        map<char,int> freq;
        for(int i=0;i<n;i++){
            char c=s[i];
            freq[c]++;
            
            if(freq[c]==2){
                while(freq[c]!=1 && j<=i){
                    freq[s[j++]]--;
                }
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
