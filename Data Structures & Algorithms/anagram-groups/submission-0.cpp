class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(string i:strs){
            string org=i;
            sort(i.begin(),i.end());
            mp[i].push_back(org);
        }
        vector<vector<string>> ans;
        for(auto i:mp) ans.push_back(i.second);
        return ans;
    }
};
