#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int numRookCaptures(vector<vector<char>>& board) 
        {
            int m = board.size();
            int n = board[0].size();

            int idxI, idxJ;
            for(int i=0; i<m; ++i)
            {
                for(int j=0; j<n; ++j)
                {
                    if(board[i][j] == 'R')
                    {
                        idxI = i;
                        idxJ = j;
                        break;
                    }
                }
            }

            int count = 0;
            // Up
            for(int i=idxI; i>=0; --i)
            {
                if(board[i][idxJ] == 'B')
                {
                    break;
                }
                else if(board[i][idxJ] == 'p')
                {
                    count++;
                    break;
                }
            }
            // Down
            for(int i=idxI; i<board.size(); ++i)
            {
                if(board[i][idxJ] == 'B')
                {
                    break;
                }
                else if(board[i][idxJ] == 'p')
                {
                    count++;
                    break;
                }
            }
            // Left
            for(int j=idxJ; j>=0; --j)
            {
                if(board[idxI][j] == 'B')
                {
                    break;
                }
                else if(board[idxI][j] == 'p')
                {
                    count++;
                    break;
                }
            }
            //Right
            for(int j=idxJ; j<board[0].size(); ++j)
            {
                if(board[idxI][j] == 'B')
                {
                    break;
                }
                else if(board[idxI][j] == 'p')
                {
                    count++;
                    break;
                }
            }

            return count;   
        }
};


int main() 
{
    Solution s1;
    vector<vector<char>> board = {{'.','.','.','.','.','.','.','.'},
                                    {'.','.','.','p','.','.','.','.'},
                                    {'.','.','.','R','.','.','.','p'},
                                    {'.','.','.','.','.','.','.','.'},
                                    {'.','.','.','.','.','.','.','.'},
                                    {'.','.','.','p','.','.','.','.'},
                                    {'.','.','.','.','.','.','.','.'},
                                    {'.','.','.','.','.','.','.','.'}};

    cout << s1.numRookCaptures(board);
    cout << endl;
    
    return 0;
}