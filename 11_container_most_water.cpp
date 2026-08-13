class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n -1;
        int maxx = 0;
        while(i < j){
            int w = j - i;
            int h = min(height[i] ,height[j]);
            int curr_ar = h * w;
            maxx = max(curr_ar, maxx);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxx;
    }
};