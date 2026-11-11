class Solution {
public:
  bool isalpha(char c){
    if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
        return true;
    }
    return false;
  }
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            while(i<j && !isalpha(s[i]))i++;
            while(i<j && !isalpha(s[j]))j--;
            if(tolower(s[i])==tolower(s[j])){
                i++;j--;
            }
            else return false;
            
        }
        return true;
    }
};
