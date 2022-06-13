class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mapper;
        
        for (int i = 0; i < nums.size(); ++i) {
            auto it = mapper.find(nums[i]);
            if (it != mapper.end()) {
                return {i, it->second};
            }   
            mapper[target - nums[i]] = i;
        }
        return {-1, -1};
    }
};