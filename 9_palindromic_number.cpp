/*************************************************************************
  > File Name: 9_palindromic_number.cpp
  > Author: 
  > Mail: 
  > Created Time: Sat 19 Aug 2017 02:45:13 PM CST
 ************************************************************************/
class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        long long b = 0;
        if(x < 0)
            return false;
        while(a){
            int val = a % 10;
            a /= 10;
            b *= 10;
            b+=val;
        }
        return b == x;
    }
};
