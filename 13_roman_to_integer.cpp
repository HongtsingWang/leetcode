/*************************************************************************
  > File Name: 13_roman_to_integer.cpp
  > Author: 
  > Mail: 
  > Created Time: Thu 24 Aug 2017 09:25:10 AM CST
 ************************************************************************/

class Solution {
public:
    int romanToInt(string s) {
        int map[26];
        map['I'-'A'] = 1;
        map['V'-'A'] = 5;
        map['X'-'A'] = 10;
        map['L'-'A'] = 50;
        map['C'-'A'] = 100;
        map['D'-'A'] = 500;
        map['M'-'A'] = 1000;
        int res = 0;
        int n = s.length();
        s.push_back(s[n-1]);
        for(int i = 0; i < n; i++){
            if(map[s[i] - 'A'] >= map[s[i+1]-'A'])
                res += map[s[i] - 'A'];
            else
                res -= map[s[i] - 'A'];
        }
        return res;
    }
};
