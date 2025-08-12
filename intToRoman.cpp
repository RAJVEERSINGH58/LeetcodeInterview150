#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        vector<pair<int, string>> romanSymbols = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}};
        
        for(auto symbol : romanSymbols){
            while(num >= symbol.first){
                s += symbol.second;
                num -= symbol.first;
            }
        }
        return s;
    }
};

int main() {
    
    return 0;
}