#include<bits/stdc++.h>
#include<vector>

using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//       sort(s.begin(),s.end());
//       sort(t.begin(),t.end());
//       if(s==t){
//         return true;
//       }
//       else return false;

//     }
// };




// class Solution {//method2
// public:
//     bool isAnagram(string s, string t) {//O(m)
//       if(s.length()!=t.length()) return false;
//       unordered_map<char,int> map1;
//       unordered_map<char,int> map2;
//       for(int i=0 ; i < s.length(); i++){
//         map1[s[i]]++;
//         map2[t[i]]++;
//       }
//       for(auto p : map1){
//         char ch1 = p.first;
//         int freq1 = p.second;
//         if(map2.find(ch1)!=map2.end()){
//             int freq2 = map2[ch1];
//             if(freq1!=freq2) return false;
//         }
//         else{ 
//             return false;}
//       }
//       return true;
//     }
// };


class Solution {
public:
    bool isAnagram(string s, string t) {//O(m)
      if(s.length()!=t.length()) return false;
      unordered_map<char,int> map1;
      for(int i=0 ; i < s.length(); i++){
        map1[s[i]]++;
      }
      for(int i=0 ; i < t.length(); i++){
        char ch = t[i];
        if(map1.find(t[i])!=map1.end()){
            map1[ch]--;
            if(map1[ch]==0) map1.erase(ch);
        }
        else return false;
      }
      if(map1.size()>0) return false;
      return true;
    }
};

int main() {
    
    return 0;
}