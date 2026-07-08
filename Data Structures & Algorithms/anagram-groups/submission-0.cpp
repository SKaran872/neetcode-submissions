class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(auto x:strs){
          string y=x;
sort(x.begin(),x.end());
mp[x].push_back(y);
        }

        vector<vector<string>> v;
        for(auto x:mp){
          v.push_back(x.second);
        }
        return v;
    }
};
