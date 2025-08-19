#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        if(m > n) return -1;

        int sidx = -1;

        int j = 0;

        for(int i = 0 ; i <= n - m ; i++){

            int j = 0;
            int k = i;

            if(haystack[i] == needle[j]){
                while(j < m && k < n && haystack[k] == needle[j]){
                    j++;
                    k++;
                }
                if(j == m) return i;
            }

        }


        return -1;
    }
};

int main() {
    
    return 0;
}