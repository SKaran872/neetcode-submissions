class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int n=nums.size();
vector<int> pref(n,1);
int x=nums[0];

for(int i=1;i<n;i++){
  pref[i]=x;
  x*=nums[i];
 
  
}
 x=nums[n-1];
for(int i=n-2;i>=0;i--){
pref[i]=x*pref[i];
x*=nums[i];
}

return pref;
    }
};
