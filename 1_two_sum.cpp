/*************************************************************************
  > File Name: 1_two_sum.cpp
  > Author: 
  > Mail: 
  > Created Time: Thu 17 Aug 2017 09:59:33 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int num_to_find = target - nums[i];
            cout << num_to_find <<endl;
            if(hash.find(num_to_find) != hash.end()){
                result.push_back(hash[num_to_find]);
                result.push_back(i);
                break;
            }
            cout << "that";
            hash[nums[i]] = i;
        }
        return result;
    }
};
