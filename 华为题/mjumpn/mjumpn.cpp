#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int> a;
    int m = 5;
    int n = 3;
    for (int i = 0; i < m; i++){
        a.push_back(i);
    }

    /*
    a.erase(a.begin() + 2);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;

    */
    int pos = 0;
    while (a.size() > 0){
        pos = (pos + n - 1) % m;
        cout << a[pos] << endl;
        a.erase(a.begin() + pos);
        m--;
    }

    return 0;
}
