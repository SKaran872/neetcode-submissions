class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int> mp;
        for(auto x:nums){
          mp[x]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto x:mp){
          pq.push({x.second,x.first});


        }
        vector<int> v;
        while(k--){
          auto x=pq.top();
          pq.pop();
          int y=x.second;
v.push_back(y);
        }

        return v;
    }
};
