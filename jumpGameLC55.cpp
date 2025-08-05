#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    bool canJumpGreedy(vector<int>& nums) {
        int n = nums.size();
        int farthest = 0;
        for (int i = 0; i < n; ++i) {
            if (i > farthest) return false;
            farthest = std::max(farthest, i + nums[i]);
        }
        return true;
    }
};


class Solution {
public:

    bool jump(vector<int>& nums , int idx , int n , vector<int>& dp){
        if(idx == nums.size() - 1) return true;
        if(dp[idx] != -1) return dp[idx];

        bool ans = false;

        for(int i = 1 ; i <= n ; i++){
            ans = ans || jump(nums , idx + i , nums[idx + i] , dp);
        }

        return dp[idx] = ans;

    }

    bool canJumpDP(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return true;
        if(nums[0]==0) return false;
        vector<int> dp(10005,-1);
        return jump(nums , 0 , nums[0] , dp);

    }
};


int main() {
    
    return 0;
}