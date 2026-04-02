class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int cao,rong;
        int maxk = INT_MIN;
        while(left != right){
            rong = right - left;
            cao = min(height[left],height[right]);
            maxk  = max(maxk,rong * cao);
            if(height[left] > height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxk;

    }
};