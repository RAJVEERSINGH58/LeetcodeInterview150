#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char , int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int n = s.length();
        if(n==0) return 0;
        int ans = mp[s[n-1]];
        for(int i = n - 2 ; i>=0 ; i--){
            if(s[i]=='I' and (s[i+1]=='V' or s[i+1]=='X')) ans -= mp['I'];
            else if(s[i]=='X' and (s[i+1]=='L' or s[i+1]=='C')) ans -= mp['X'];
            else if(s[i]=='C' and (s[i+1]=='D' or s[i+1]=='M')) ans -= mp['C'];
            else ans += mp[s[i]];
        }
        return ans;
    }
};

int main() {
    
    return 0;
}