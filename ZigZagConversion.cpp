#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1 || numRows >= s.length())
            return s;

        vector<string> ans(numRows);

        int currRow = 0;

        bool goingDown = false;

        for (auto c : s) {
            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;
            ans[currRow] += c;
            currRow += goingDown ? 1 : -1;
        }

        string res = "";

        for (auto x : ans) {
            res += x;
        }

        return res;
    }
};

int main() {
    
    return 0;
}