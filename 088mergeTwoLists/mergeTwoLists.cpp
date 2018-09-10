#include <stdlib.h>
#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 */
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

void add_result(ListNode * result, ListNode * n){

}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *result = NULL, *result_tail = NULL;
        while(1){

            if (l1 == NULL ) {
                if (l2 == NULL) return result;
                else{
                    if (result == NULL){
                        // origin l1 is empty
                        result = l2;
                        result_tail = l2;
                        return result;
                    }
                    else{
                        result_tail->next = l2;
                        return result;
                    }
                }
            }
            else{
                //l1 not empty
                if (l2 == NULL){
                    //l1 not empty, l2 empty
                    if (result != NULL){
                        result_tail->next = l1;
                        return result;
                    }
                    else{
                        return l1;
                    }
                }
                else{
                    if (l1->val <= l2->val){
                        //l1 <= l2
                        if (result == NULL){
                            result = l1;
                            result_tail = l1;
                            if (l1->next != NULL){
                                l1 = l1->next;
                                result_tail->next = NULL;
                            }
                            else l1 = NULL;
                        }
                        else{
                            result_tail->next = l1;
                            result_tail = l1;
                            if (l1->next != NULL){
                                l1 = l1->next;
                                result_tail->next = NULL;
                            }
                            else l1 = NULL;
                        }
                    }
                    else{
                        //l1 > l2
                        if (result == NULL){
                            result = l2;
                            result_tail = l2;
                            if (l2->next != NULL){
                                l2 = l2->next;
                                result_tail->next = NULL;
                            }
                            else l2 = NULL;
                        }
                        else{
                            result_tail->next = l2;
                            result_tail = l2;
                            if (l2->next != NULL){
                                l2 = l2->next;
                                result_tail->next = NULL;
                            }
                            else l2 = NULL;
                        }

                    }
                }
            }
        }

    }
};



int main(){
    ListNode a(1), b(2), c(4), x(2), y(3), z(4);
    ListNode *aa = &a, *bb = &b, *cc = &c, *xx = &x, *yy = &y, *zz = &z;
    /*
    aa->next = bb;
    bb->next = cc;
    xx->next = yy;
    yy->next = zz;
    */
    Solution ss;
    ListNode *n = aa;/*
    while (n != NULL){
        cout << n->val << "->";
        n = n->next;
    }
    n = xx;
    while (n != NULL){
        cout << n->val << "->";
        n = n->next;
    }
    cout << endl;*/
    n = ss.mergeTwoLists(aa, xx);

    while (n != NULL){
        cout << n->val << "->";
        n = n->next;
    }
    cout << endl;
    /*****/
    return 1;
}
