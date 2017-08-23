/*************************************************************************
  > File Name: 11_container_with_most_water.cpp
  > Author: 
  > Mail: 
  > Created Time: Wed 23 Aug 2017 04:54:34 PM CST
 ************************************************************************/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int length = height.size();
        int result = 0;
        int start = 0;
        int end = length - 1;
        while(start < end){
            if (height[start] <= height[end]){
                result = max(result, (end - start) * height[start]);
                start += 1;
            } else{
                result = max(result, (end - start) * height[end]);
                end -= 1;
            }
        }
        return result;
    }
};
