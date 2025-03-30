#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            for(int i=0;i<9;i++){
                unordered_map<char,int>m;
                for(int j=0;j<9;j++){
                    if(board[i][j]>='1' && board[i][j]<='9') m[board[i][j]]++;
                }
                for(auto x : m){
                    if(x.second>1) return false;
                }           
            }
            for(int j=0;j<9;j++){
                unordered_map<char,int>m;
                for(int i=0;i<9;i++){
                    if(board[i][j]>='1' && board[i][j]<='9') m[board[i][j]]++;
                }
                for(auto x : m){
                    if(x.second>1) return false;
                }           
            }
            for(int i=0;i<9;i+=3){
                for(int j=0;j<9;j+=3){
                    unordered_map<char,int>m;
                    for(int row=i;row<i+3;row++){
                        for(int clm=j;clm<j+3;clm++){
                            if(board[row][clm]>='1' && board[row][clm]<='9') m[board[row][clm]]++;
                        }
                    }
                    for(auto x : m){
                        if(x.second>1) return false;
                    }  
                }
            }
            return true;
        }
    };
int main(){
    return 0;
}