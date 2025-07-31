#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        int count = 1;
        for(int i = 1 ; i < n ; i++){
            if(nums[i]==nums[i-1] and count>=2){
                count++;
            }
            else if(nums[i]==nums[i-1] and count<2){
                count++;
                nums[k] = nums[i];
                k++;
            }
            else{
                count = 1;
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    
    return 0;
}