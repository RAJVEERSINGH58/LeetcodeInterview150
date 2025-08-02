#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(); 
        k=k%n;      
        reverse(nums.begin(),nums.begin()+n-1-k+1);
        reverse(nums.begin()+n-1-k+1,nums.end());
        reverse(nums.begin(),nums.end());
        return;
    }
};

int main() {
    
    return 0;
}