class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int maxArea=INT_MIN;
        while(i<=j){
int length=j-i;
int width=min(heights[i],heights[j]);
int area=length*width;
maxArea=max(area,maxArea);
if(heights[i]<=heights[j])i++;
else j--;

        }
        return maxArea;
    }
};
