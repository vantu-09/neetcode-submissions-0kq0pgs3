class Solution {

public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		map<int, int> a;
		for (int i = 0; i < nums.size(); i++) {
			a[nums[i]]++;
		}
		vector<pair<int, int>> res(a.begin(),a.end());
		sort(res.begin(), res.end(), [](auto x, auto y) {return x.second > y.second; });
		vector<int> temp;
		for (int i = 0; i < k && i < res.size(); i++) {
			temp.push_back(res[i].first);
		}
		return temp;
	}
};