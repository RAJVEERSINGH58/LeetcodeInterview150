#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:

    static bool cmp(int a , int b){
        return a > b;
    }

    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        sort(citations.begin() , citations.end() , cmp);

        int h = 0;

        for(int i = 0 ; i < n ; i++){
            if(citations[i] >= i + 1)
                h++;
            else
                break;
        }

        return h;

    }
};

int main() {
    
    return 0;
}