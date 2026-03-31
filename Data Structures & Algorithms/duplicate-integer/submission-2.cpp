class Solution {
public:
	bool hasDuplicate(vector<int>& nums) {
		set<int> a;
		for (auto e : nums) {
			a.insert(e);
		}
		if (a.size() == nums.size()) {
			return false;
		}return true;
	}
};