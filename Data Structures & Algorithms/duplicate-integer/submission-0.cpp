class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int i=0;
        for(auto it:nums){
          if(mp.find(it)!=mp.end()) return true;
        
          mp[it]=1;

        }
        return false;
    }
};