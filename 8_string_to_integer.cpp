/*************************************************************************
  > File Name: 8_string_to_integer.cpp
  > Author: 
  > Mail: 
  > Created Time: Sat 19 Aug 2017 02:42:32 PM CST
 ************************************************************************/


class Solution {
public:
    int myAtoi(string str) {
        // 此题需要考虑的几个方面
        // 1. 字符串是否为空        
        // 2. 判断结果是否溢出
        // 3. 忽略掉前置的空格
        // 4. 中间如果有非法字符出现，则停止继续转换
        // 5. 数字为负数的情况要首先考虑
        if(str == "")
            return 0;
        int i = 0;
        bool flag = true;
        long long res = 0;
        while(str[i] == ' ')
            i++;
        if(str[i] == '+')
            i++;
        else if(str[i] == '-'){
            i++;
            flag = false;
        }
        for(i; i < str.length();i++){
            if(str[i] >= '0' && str[i] <= '9')
                res = res * 10 + str[i] - '0';
            else
                break;
            if(res > INT_MAX)
            {
                if(flag == true)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
        }
        if(flag == false)
            res *= -1;
        return res;
        
    }
};
