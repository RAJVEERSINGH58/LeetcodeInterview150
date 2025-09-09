#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:

    vector<string> split(string s){
        vector<string> tokens;
        string token;

        stringstream ss(s);

        while(ss >> token){
            tokens.push_back(token);
        }

        return tokens;

    }

    bool wordPattern(string pattern, string s) {

        int n = pattern.length();
        
        vector<string> v = split(s);

        unordered_map<char , string> mp1;
        unordered_map<string , char> mp2;

        if(n != v.size()) return false;

        for(int i = 0 ; i < n ; i++){
            if(mp1.find(pattern[i]) != mp1.end() && v[i] != mp1[pattern[i]]) return false;

            else{
                mp1[pattern[i]] = v[i];
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(mp2.find(v[i]) != mp2.end() && pattern[i] != mp2[v[i]]) return false;

            else{
                mp2[v[i]] = pattern[i];
            }
        }

        return true;

    }
};

int main() {
    
    return 0;
}