/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <stdlib.h>
 #include <iostream>
 using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, c = 0;
        ListNode *a = l1, *b = l2;
        c = 0;
        carry = (a->val + b->val + c) / 10;
        a->val = (a->val + b->val + c) % 10;
        while (a->next != NULL && b->next != NULL){
            a = a->next;
            b = b->next;
            c = carry;
            carry = (a->val + b->val + c) / 10;
            a->val = (a->val + b->val + c) % 10;

        }
        if (a->next == NULL && b->next != NULL){
            a->next = b->next;
            while (b->next != NULL){
                c = carry;
                b = b->next;
                carry = (b->val + c) / 10;
                b->val = (b->val + c) % 10;
            }
            if (carry != 0){
                ListNode *n = new ListNode(carry);
                b->next = n;
            }
        }
        else if (a->next != NULL && b->next == NULL){
            while (a->next != NULL){
                c = carry;
                a = a->next;
                carry = (a->val + c) / 10;
                a->val = (a->val + c) % 10;
            }
            if (carry != 0){
                ListNode *n = new ListNode(carry);
                a->next = n;
            }
        }
        else if (a->next == NULL && b->next == NULL)
            if (carry != 0){
                ListNode *n = new ListNode(carry);
                a->next = n;
            }
        return l1;
    }
};
