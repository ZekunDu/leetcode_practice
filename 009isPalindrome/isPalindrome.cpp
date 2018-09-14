#include <cstdlib>
#include <iostream>

using namespace std;

#define OUTPUT 0

/*
static const auto x = []()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x < 10) return true;
        int w = x, n = 1;
        while (w >= 10){
            w /= 10;
            n++;
        }
        #if OUTPUT == 1
        cout << "n = " << n << endl;
        #endif // OUTPUT
        int *a = new int[n];
        int i = 0;
        while (x > 0){
            a[i] = x % 10;
            #if OUTPUT == 1
            cout << a[i] << " ";
            #endif // OUTPUT
            x /= 10;
            i++;
        }
        #if OUTPUT == 1
        cout << endl;
        #endif // OUTPUT
        int half = n / 2 + n % 2;
        for (i = 0; i < half; i++){
            if (a[i] != a[n - 1 - i]) return false;
        }
        return true;
    }
};

int main(){
    int x = 121;
    Solution s;
    cout << s.isPalindrome(x) << endl;
    return 0;
}
