
#include <stdio.h>
#include <stdlib.h>
#include "addTwoNumbers.cpp"
#include <iostream>

using namespace std;

Solution sol;

int main(){
    ListNode *l1, *l2;
    ListNode a(2), b(9);
    l1 = &a;
    l2 = &b;
    /*
    l1->next = new ListNode(5);
    l2->next = new ListNode(1);
    l1->val = 4;
    cout << l1->val << endl;
    */
    l1->val = 5;
    l2->val = 5;

    l1 = sol.addTwoNumbers(l1, l2);
    while (l1 != NULL){
        cout << l1->val << " -> ";
        l1 = l1->next;
    }
    cout << endl;
}
