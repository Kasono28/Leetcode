#ifndef LEETCODE_001_TWOSUM_H
#define LEETCODE_001_TWOSUM_H

class Leetcode_001_TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> varr;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    varr.push_back(i);
                    varr.push_back(j);
                }

            }
        }
        return varr;
    }
};
#endif //LEETCODE_001_TWOSUM_H
