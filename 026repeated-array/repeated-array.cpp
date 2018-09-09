#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int number;
        int len = nums.size();
        if (len == 0) return 0;
        number = nums[0]
        for (int i = 0; i < len; i++){
            if (nums[i] != number){
                index++;
                number = nums[i];
                nums[index] = number;
            }
        }
        return index + 1;
    }
};

int main(){
}
