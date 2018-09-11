#include<stdlib.h>
#include<iostream>
#include <cmath>

using namespace std;

bool compare_digit(int * a, int * c, int i, int n){
    //i start with 0 for the first call

    if (n < 9) return true;
    if (i > n) return true;

    if (a[i] > c[n - i])        return false;
    else if (a[i] < c[n - i])   return true;
    else return compare_digit(a, c, i + 1, n);
    return false;
}

class Solution {
public:
    int reverse(int x) {
        int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        /**a 0 least digit, a9 largest **/
        int result = 0;
        int comp[10] = {7, 4, 6, 3, 8, 4, 7, 4, 1, 2};
        /** comp 0 least digit, comp 9 biggest digit **/
        int i = 0, n = 0;
        bool not_much = true; // the reversed number not too much
        bool sym = true;

        if (x < 0){
            sym = false;
        }
        while (x != 0){
            // a0 the least, a9 the biggest
            a[i] = x % 10;
            x = x / 10;
            if (!sym) a[i] = -a[i];
            i++;
            n++;
        }
        cout << "sym" << sym << endl;
        if (!sym) comp[0] = 8;
        not_much = compare_digit(a, comp, 0, n - 1);


        if (!not_much) return 0;
        if (sym){
            for (int j = 0; j < n; j++){
                result *= 10;
                result += a[j];
            }
        }
        else{
            for (int j = 0; j < n; j++){
                result *= 10;
                result = result - a[j];
            }
        }
        return result;
    }
};

int main(){
    int a[2] = {2, 3};
    int b[2] = {2, 3};
    int c[2] = {3, 2};
    int d[2] = {2, 1};
    cout << compare_digit(a, b, 0, 1) << endl;

    cout << compare_digit(a, c, 0, 1) << endl;
    cout << compare_digit(a, d, 0, 1) << endl;

    int x = 1563847412, y;
    Solution ss;
    y = ss.reverse(x);
    cout << y << endl;
    /**/
}
