#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        if (ratings.size() <= 1) return ratings.size();
        
        int candies = 0;
        int up = 0, down = 0;
        int old_slope = 0;
        
        for (int i = 1; i < ratings.size(); i++) {
            // Calculate current slope
            int new_slope = 0;
            if (ratings[i] > ratings[i-1]) new_slope = 1;      // Rising
            else if (ratings[i] < ratings[i-1]) new_slope = -1; // Falling  
            else new_slope = 0;                                // Flat
            
            // End of mountain detected
            if ((old_slope > 0 && new_slope == 0) || 
                (old_slope < 0 && new_slope >= 0)) {
                candies += count(up) + count(down) + max(up, down);
                up = 0;
                down = 0;
            }
            
            // Update counters based on slope
            if (new_slope > 0) up++;
            else if (new_slope < 0) down++;
            else candies++; // Flat terrain, add 1 candy
            
            old_slope = new_slope;
        }
        
        // Handle final mountain
        candies += count(up) + count(down) + max(up, down) + 1;
        return candies;
    }
    
private:
    int count(int n) {
        return (n * (n + 1)) / 2;  // Sum of 1 to n
    }
};


int main() {
    
    return 0;
}