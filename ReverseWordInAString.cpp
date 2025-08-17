#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:

    void removeExtraSpace(string &s){
        int i = 0 , j = 0;
        int n = s.length();

        while(i < n && s[i] == ' ') i++;

        while(i < n){
            if(s[i] != ' '){
                s[j++] = s[i++];
            }
            else{
                s[j++] = ' ';
                while(i < n && s[i] == ' ') i++;
            }
        }

        if (j > 0 && s[j - 1] == ' ') j--;

        s.resize(j);


    }

    string reverseWords(string s) {

        removeExtraSpace(s);

        reverse(s.begin() , s.end());

        int start = 0;
        int end = 0;

        for(int end = 0 ; end <= s.length(); end++){
            if(end == s.size() ||s[end] == ' '){
                reverse(s.begin() + start , s.begin() + end);
                start = end + 1;
            }
        }

        return s;
        
    }
};

int main() {
    
    return 0;
}