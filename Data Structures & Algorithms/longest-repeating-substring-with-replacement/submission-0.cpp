class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int n=s.size();
        int j=0;
        map<char,int> mp;
        int mostf=0;
        for(int i=0;i<n;i++){
            char c = s[i];
            mp[c]++;
            mostf = max(mostf, mp[c]);

            while ((i - j + 1) - mostf > k) {
                mp[s[j]]--;
                j++;
            }

            ans = max(ans, i - j + 1);
            
            
        }
        return ans;
    }
};
