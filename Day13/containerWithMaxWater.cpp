class Solution {
public:
    int maxArea(vector<int>& heights) {
        int leftPointer=0;
        int rightPointer=heights.size()-1;
        int ans=0;
        while(leftPointer<rightPointer){
            int width=rightPointer-leftPointer;
            int height=min(heights[leftPointer],heights[rightPointer]);
            int area = width*height;
            ans=max(ans,area);
            heights[leftPointer]<heights[rightPointer]?leftPointer++:rightPointer--;
        }
        return ans;
    }
};