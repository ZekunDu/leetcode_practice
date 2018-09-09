
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    map <int, int>::iterator it;
    map <int, int> hop;
    hop.insert(pair<int, int>(1, 2));
    int it = hop.find(3);
}
