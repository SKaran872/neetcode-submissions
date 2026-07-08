class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size()!=t.size()) return false;
        vector<int> freq(26,0);
        for(auto x:s){
          freq[x-'a']++;
        }

        for(auto x:t){
          if(freq[x-'a']>0)freq[x-'a']--;
          else return false;
        }
return true;
    }
};
