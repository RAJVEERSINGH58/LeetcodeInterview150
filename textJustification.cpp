#include<bits/stdc++.h>
#include<vector>

using namespace std;

    class Solution {
    public:
        vector<string> fullJustify(vector<string>& words, int maxWidth) {
            
            int n = words.size();

            vector<string> v;

            v.reserve(n/3);

            int left = 0;

            while(left < n){
                int right = left , totalLen = 0;

                while(right < n && (totalLen + words[right].length() + right - left) <= maxWidth){
                    totalLen += words[right].length();
                    right++;
                }

                int gapCount = right - left - 1;
                string line;
                line.reserve(maxWidth);

                if(right == n || gapCount == 0){
                    for(int i = left ; i < right ; i++){
                        line += words[i];
                        if(i < right - 1) line += " ";
                    }
                    line.append(maxWidth - line.length(), ' ');
                }
                else{
                    int totalSpaces = maxWidth - totalLen;
                    int spacePerGap = totalSpaces / gapCount;
                    int extraSpaces = totalSpaces % gapCount;
                    
                    for (int i = left; i < right; i++) {
                        line += words[i];
                        if (i < right - 1) {
                            int spaces = spacePerGap + (extraSpaces-- > 0 ? 1 : 0);
                            line.append(spaces, ' ');
                        }
                    }
                }
                
                v.push_back(move(line));  
                left = right;
            }
            
            return v;
        }
    };

int main() {
    
    return 0;
}