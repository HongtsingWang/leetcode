/*************************************************************************
  > File Name: 15_3Sum.cpp
  > Author: 
  > Mail: 
  > Created Time: Wed 30 Aug 2017 06:52:05 AM CST
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size();i++){
            int target = 0 - nums[i];
            int begin = i + 1;
            int end = nums.size() - 1;
            while(begin < end){
                int sum = nums[begin] + nums[end];
                if(sum > target) {
                    end--;
                } else if(sum < target){
                    begin++;
                } else {
                    vector<int> triplt(3,0);
                    triplt[0] = nums[i];
                    triplt[1] = nums[begin];
                    triplt[2] = nums[end];
                    res.push_back(triplt);
                    while(begin < end && nums[begin] == triplt[1]) 
                        begin++;
                    while(begin < end && nums[begin] == triplt[2])
                        end--;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
                i++;
            
            
        }
        return res;
    }
};
