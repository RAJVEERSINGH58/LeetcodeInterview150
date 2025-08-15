#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i;
        for(i = n - 1 ; i >= 0 ; i--){
            if(!isspace(s[i])) break;
        }
        int ans = 0;
        for(int k = i ; k >=0 ;k--){
            if(isspace(s[k])) break;
            ans++;
        }
        return ans;
    }
};

int main() {
    
    return 0;
}