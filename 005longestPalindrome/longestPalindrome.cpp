#include "longestPalindrome.h"
#include <string>
//#include <sstream>
#include <iostream>

using namespace std;

int main(){
    string s = "babad";
    string n;
    Solution sol;
    cout << s << endl;
    n = sol.longestPalindrome(s);
    //printf("%s\n", n.c_str());

    cout << n << endl;
}
