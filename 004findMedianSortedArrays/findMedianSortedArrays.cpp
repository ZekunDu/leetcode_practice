#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
};

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    vector<int> big_list;
    int i = 0, j = 0;
    int n, remain;
    double medium;
    n = nums1.size() + nums2.size();
    remain = n % 2; // 1 for odd, 0 for even
    while (i + j < n - 1 && i < nums1.size() && j < nums2.size()){
    if (nums1[i] <= nums2[j]){
            big_list.push_back(nums1[i++]);
        }
        else{
            big_list.push_back(nums2[j++]);
        }
    }
    if (i < nums1.size()){
        while (i < nums1.size()){
            big_list.push_back(nums1[i++]);
        }
    }
    else if (j < nums2.size()){
        while (j < nums2.size()){
            big_list.push_back(nums2[j++]);
        }
    }
    if (remain){
        // odd numbers
        medium = big_list[(n - 1) / 2];
        return medium;
    }
    else{
        medium = big_list[n / 2 - 1] + big_list[n / 2];
        medium /= 2;
        return medium;
    }
}

int main(){
    vector<int> n1, n2;
    Solution s;
    n1.push_back(1);
    n1.push_back(2);
    n2.push_back(3);
    n2.push_back(4);
    double out;
    out = s.findMedianSortedArrays(n1, n2);
    cout << out << endl;
}

