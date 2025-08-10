#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0 , totalCost = 0;

        for(int i = 0 ; i < gas.size() ; i++){
            totalGas += gas[i];
            totalCost += cost[i];
        }

        if(totalCost > totalGas) return -1;

        int currGas = 0;
        int startIdx = 0;

        for(int i = 0 ; i < gas.size(); i++){
           currGas += gas[i] - cost[i];
           if(currGas < 0){
                startIdx = i + 1;
                currGas = 0;
           }
        }

        return startIdx;

    }
};

int main() {
    
    return 0;
}