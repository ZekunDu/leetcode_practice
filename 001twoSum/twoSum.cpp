#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>

#include <map>

using namespace std;
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if (nums[i] + nums[j] == target){
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
            }
        }
    }
};

*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int n = nums.size();
        map<int, int> h;
        map<int, int>::iterator it;
        for (int i = 0; i < n; i++)
            h.insert(pair<int, int>(nums[i], i));
        for (int i = 0; i < n; i++){
            it = h.find(target - nums[i]);
            if (it != h.end()){
                int j = it->second;
                if (i != j){
                    vector<int> result;
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        throw -1;
    }
};
