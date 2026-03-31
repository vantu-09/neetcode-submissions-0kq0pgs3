class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int dem0= 0;
        int temp0 = 1;
        for(auto e : nums){
            if(e == 0){
                dem0++;
            }else{
                temp0 *= e;
            }
        }
        if(dem0 != 0){
            if(dem0 == 1){
                vector<int> res;
                for(auto e : nums){
                    if( e != 0){
                        res.push_back(0);
                    }else{
                        res.push_back(temp0);
                    }
                }
                return res;
            }else{
                vector<int> res(nums.size(),0);
                return res;
            }
        }
        int temp = 1;
        for(int i = 0; i < nums.size(); i++){
            temp *= nums[i];
        }
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            res.push_back(temp / nums[i]);
        }
        return res;
    }
};
