#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int cnt = 0;
        int el1 = INT_MIN;

        for(int num : nums){
            if(num == el1) cnt++;
            else if(cnt == 0){
                cnt = 0;
                el1 = num;
            } else cnt--;
        }

         return el1;
        
    }
};

int main() {
    
    return 0;
}