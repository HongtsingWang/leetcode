/*************************************************************************
  > File Name: 7_reverse_integer.cpp
  > Author: 
  > Mail: 
  > Created Time: Sat 19 Aug 2017 02:39:37 PM CST
 ************************************************************************/

class Solution {
public:
    int reverse(int x) {
       
        long long res = 0;
        // bool flag = x > 0 ? true : false;
       
        while(x){
            int val = x % 10;
            x /= 10;
            res *= 10;
            res += val;
        }
        
        // if(!flag)
        //     res *= -1;
        
        if(res >= INT_MAX || res <= INT_MIN)
            return 0;
            
        return res;
    }
};
