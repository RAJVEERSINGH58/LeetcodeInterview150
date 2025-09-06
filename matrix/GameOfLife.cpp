#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:

    bool isSafeIdx(int i , int j , int m , int n){
        return i >= 0 && j >= 0 && i < m && j < n;
    }

    void gameOfLife(vector<vector<int>>& board) {
        
        vector<vector<int>> x =  board;

        int m = board.size();
        int n = board[0].size();

        vector<int> dx = {1 , 0 , -1 , 0 , -1 , 1 , -1 , 1};
        vector<int> dy = {0 , 1 , 0 , -1 , -1 , 1 , 1 , -1};

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){

                int oneInNeigh = 0;

                for(int k = 0 ; k < 8 ; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(! isSafeIdx(ni , nj , m , n)) continue;
                    if(board[ni][nj] == 1) oneInNeigh++;
                }

                if(board[i][j] == 1){
                    if(oneInNeigh < 2) x[i][j] = 0;
                    else if(oneInNeigh > 3) x[i][j] = 0;
                }

                if(board[i][j] == 0 && oneInNeigh == 3) x[i][j] = 1;

            }
        }

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                board[i][j] = x[i][j];
            }
        }

    }
};

int main() {
    
    return 0;
}