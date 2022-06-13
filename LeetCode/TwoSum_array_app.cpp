class Solution {
public:
    
    int findIndex(int x , vector<int>& nums , int si){
        for(int i = si + 1; i < nums.size(); i++){
            if(x == nums[i]){
                return i;
            }
        }
        return -1;
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> output;
            for(int i = 0; i < nums.size(); i++){
                int temp = target - nums[i];
                int index = findIndex(temp , nums , i);
                if(index == -1){
                    continue;
                }else{
                    output.push_back(index);
                    output.push_back(i);
                    break;
                }
            }
        return output;
    }
};