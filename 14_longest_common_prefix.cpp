/*************************************************************************
  > File Name: 14_longest_common_prefix.cpp
  > Author: 
  > Mail: 
  > Created Time: Wed 30 Aug 2017 06:39:44 AM CST
 ************************************************************************/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        
        string res = strs[0];
        for(int i = 1; i < strs.size();i++){
            int j;
            for(j = 0; j < min(strs[i].size(),res.size());j++){
                if(res[j] != strs[i][j])
                    break;
            }
            res = res.substr(0,j);
        }
        return res;
    }
};
