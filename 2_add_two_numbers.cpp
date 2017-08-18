/*************************************************************************
  > File Name: 2_add_two_numbers.cpp
  > Author: 
  > Mail: 
  > Created Time: Fri 18 Aug 2017 10:24:40 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode pRoot(0);
        int temp = 0;
        ListNode *pCurrent =& pRoot;
        while(l1 || l2){
            int l1_num = l1 ? l1->val : 0;
            int l2_num = l2 ? l2->val : 0;
            int spec_num = (l1_num + l2_num + temp) % 10;
            temp = (l1_num + l2_num + temp) / 10;
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
            pCurrent->next = new ListNode(spec_num);
            pCurrent = pCurrent -> next;
            // pCurrent->val = spec_num;
        }
        if(temp){
            pCurrent -> next = new ListNode(temp);
        }
        return pRoot.next;
    }
};
