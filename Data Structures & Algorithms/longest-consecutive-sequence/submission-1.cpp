
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n = nums.size();
        unordered_set<int> s;
        for (auto x : nums) {
            s.insert(x);
        }
        int ans = 0;
        for (auto x : s) {
            if (s.count(x - 1))
                continue;
            int curr = x;
            int cnt = 1;
            while (s.find(curr + 1) != s.end()) {
                cnt++;
                curr++;
            }
            ans = max(cnt, ans);
        }
        return ans;
    }
};
