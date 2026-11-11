
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;

        for(auto x : nums) {
            s.insert(x);
        }

        int cnt = 0, ans = 0;

        for(int i = 0; i < n; i++) {
            int x = nums[i];

            // Start counting only from the beginning
            if(s.count(x - 1)) continue;

            cnt = 1;

            while(s.find(x + 1) != s.end()) {
                x++;
                cnt++;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};
