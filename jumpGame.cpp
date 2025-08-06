#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:

    int f(vector<int>& nums , int idx , vector<int>& dp){
        if(idx == nums.size() - 1) return 0;
        if(dp[idx] != -1) return dp[idx];
        
        int ans = INT_MAX;

        for(int i = 1 ; i <= nums[idx] ; i++){
            if(idx + i >= nums.size()) break;
            int temp = f(nums, idx + i, dp);
            if (temp != INT_MAX) 
                ans = min(ans, 1 + temp);
        }

        return dp[idx] = ans;

    }

    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        vector<int> dp(n + 5 , -1);
        return f(nums , 0 , dp);
    }
};

int main() {
    
    return 0;
}