#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++){
            int rem = target - nums[i];
            if(m.find(rem)!=m.end()){
                v.push_back(m[rem]); //m[rem] gives index of remainder i.e  target - nums[i]
                v.push_back(i);
            }
            else{
                m[nums[i]]=i;
            }
        }
        return v;
    }
};

int main() {
    
    return 0;
}