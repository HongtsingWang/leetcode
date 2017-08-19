/*************************************************************************
  > File Name: 6_zigzag.cpp
  > Author: 
  > Mail: 
  > Created Time: Sat 19 Aug 2017 02:39:11 PM CST
 ************************************************************************/
class Solution {
public:
    string convert(string s, int numRows) {
        int step = 2 * numRows - 2;
        int len = s.length();
        string res;
        int start = 0;
        if(numRows >= len || s.length() == 0 || numRows == 1)
            return s;
        bool even = true;
        while(start < numRows){
            int temp = start;
            while(temp < len){
                res.push_back(s[temp]);
                
                if(start != 0 && start != numRows - 1 && temp + step - 2 * start < len)
                    res.push_back(s[step + temp - 2 * start]);
                temp += step;
            }
            // even = !even;
            start++;
        }
        return res;
    }
};
