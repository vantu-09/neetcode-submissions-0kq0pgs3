class Solution {
private:
    int lis_len(const vector<int> &a){
        if(a.empty())return 0;
        vector<int> v;
        for(int x : a){
            auto it = lower_bound(v.begin(),v.end(),x);
            if(it == v.end()){
                v.push_back(x);
            }else{
                *it = x;
            }
        }
        return v.size();
    }

public:
    int lengthOfLIS(vector<int>& nums) {
        return lis_len(nums);
    }
};
