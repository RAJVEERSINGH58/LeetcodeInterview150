#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:

    int sq(int n){
        int ans = 0;
        while(n > 0){
            ans += (n % 10) * (n % 10); 
            n /= 10;  
        }
        return ans;
    }

    bool isHappy(int n) {
        unordered_map<int , bool> vis; 
        while(n != 1){
            if(vis[n]==true) return false;  
            vis[n] = true;  
            n = sq(n);  
        }
        return true;  
    }
};


int main() {
    
    return 0;
}