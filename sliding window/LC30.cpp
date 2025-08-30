#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> freq,curr;
        for(string& word: words)
            freq[word]++;
        
        int len = s.size();
        int n = words.size();
        int wordSize = words[0].size();
        int windowSize = wordSize*n;

        vector<int> ans;
        for(int startPos=0;startPos<wordSize;++startPos){//Try all starting positions
            int start = startPos;
            do {
                curr = freq;    //Make a copy of freq map to edit
                string currWord;
                bool matched = true;    //presume that match happened
                for(int i=0;i<n;++i){   //Find each word
                    currWord = s.substr(start+i*wordSize,wordSize); //Extract current word
                    if(!curr.count(currWord) or curr[currWord]==0){ //Match word
                        matched = false;    //current word did not match
                        break;
                    }
                    curr[currWord]--;           //Remove word after having found
                }
                if(matched==true)               //Found match
                    ans.push_back(start);
                start+=wordSize;                //Sliding Window
            }while(start+windowSize-1<len);     //Bound check
        }
        return ans;
    }
};

int main() {
    
    return 0;
}