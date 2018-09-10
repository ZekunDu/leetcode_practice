#ifndef _REVERSE_LIST_
#define _REVERSE_LIST_

#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * temp, *pre = NULL;
        while (head != NULL){
            temp = head->next;
            head->next = pre;
            pre = head;
            head = temp;
        }
        return pre;
    }
};

#endif // _REVERSE_LIST_
