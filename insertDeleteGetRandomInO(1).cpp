#include<bits/stdc++.h>
#include<vector>

using namespace std;

#include <vector>
#include <unordered_map>
#include <cstdlib>

class RandomizedSet {
public:
    std::vector<int> arr;                    
    std::unordered_map<int, int> mp;         

    RandomizedSet() {}

    bool insert(int val) {
        if (mp.count(val)) return false;     
        arr.push_back(val);                  
        mp[val] = arr.size() - 1;           
        return true;
    }

    bool remove(int val) {
        if (!mp.count(val)) return false;    
        int idx = mp[val];                   
        int last = arr.back();               
        arr[idx] = last;                    
        mp[last] = idx;                     
        arr.pop_back();                      
        mp.erase(val);                       
        return true;
    }

    int getRandom() {
        int idx = rand() % arr.size();       
        return arr[idx];
    }
};


int main() {
    
    return 0;
}