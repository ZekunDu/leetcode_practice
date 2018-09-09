#ifndef _LONGEST_PALINDROME_
#define _LONGEST_PALINDROME_

#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;

class Solution {
public:
    string longestPalindrome(string s);
};

int max_of_three(int x, int y, int z){
    if (x > y && x > z){
        return x;
    }
    else if (y > z) return y;
    else return z;
}

string Solution::longestPalindrome(string s){
    //dynamic programming
    string subs;
    int n = s.length();
    int head = 0, tail = 0;
    int **a;
    if (n == 0) return "";
    if (n == 1) return s;
    a = new int*[n];
    for (int i = 0; i < n; i++){
        a[i] = new int[n];
        for (int j = 0; j < n; j++) a[i][j] = 0;
    }
    for (int i = 0; i < n; i++){
        a[i][i] = 1;
    }
    for (int i = 0; i < n - 1; i++){
        if (s[i] == s[i + 1]){
            a[i][i + 1] = 2;
            if (1 > tail - head){
                head = i;
                tail = i + 1;
            }
        }
        else a[i][i + 1] = 0;
    }
    for (int j = 2; j < n; j++){
        for (int i = 0; i < n - 2; i++){
            if (i + j < n) {
                if (s[i] == s[i + j] && a[i + 1][i + j - 1] == j - 1){
                    a[i][i + j] = max_of_three(a[i + 1][i + j - 1] + 2, a[i][i + j - 1], a[i + 1][i + j]);
                    if (tail - head < j){
                        head = i;
                        tail = i + j;
                    }
                    //cout << s.substr(head, tail - head + 1) << endl;
                }
                else a[i][i + j] = max_of_three(a[i + 1][i + j - 1], a[i][i + j - 1], a[i + 1][i + j]);
            }
        }
    }
    /*
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    */
    subs = s.substr(head, tail - head + 1);

    return subs;
}


#endif // _longestPalindrome_
