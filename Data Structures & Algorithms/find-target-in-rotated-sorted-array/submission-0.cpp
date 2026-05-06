class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<pair<int,int>> a(nums.size());
        for(int i= 0; i < nums.size(); i++){
            a[i].first = nums[i];
            a[i].second = i;
        }
        sort(a.begin(),a.end(),[](auto  x, auto y){return x.first < y.first; });
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(a[mid].first == target){
                return a[mid].second;
            }else if(a[mid].first < target){
                left = mid + 1;
            }else{
                right = mid-1;
            }
        }
        return -1;
    }
};
