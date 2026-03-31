class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int dem = 0;
        vector<int> res;
        bool flag = false;
        for (int i = 0; i < temperatures.size(); i++) {
            for (int j = i + 1; j < temperatures.size(); j++) {
                if (temperatures[j] > temperatures[i]) {
                    dem++;
                    flag = true;
                    break;
                }
                else {
                    dem++;
                }
            }

            res.push_back((flag ?dem:0));
            flag = false;
            dem = 0;
        }
        return res;
    }
};