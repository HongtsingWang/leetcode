/*************************************************************************
  > File Name: 3_longest_substring_without_repeating_characters.cpp
  > Author: 
  > Mail: 
  > Created Time: Fri 18 Aug 2017 10:26:10 AM CST
 ************************************************************************/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);
        int result = 0;
        int left = 0;
        for(int i =0; i< s.length();i++){
            if(hash[s[i]] == -1 || hash[s[i]] < left){
                result = max(result, i - left + 1);
            }else{
                left = hash[s[i]] + 1;
            }
            hash[s[i]] = i;
        }
        return result;
    }
};
