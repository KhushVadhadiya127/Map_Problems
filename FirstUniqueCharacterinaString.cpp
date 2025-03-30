#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
    public:
        int firstUniqChar(string s) {
           unordered_map<char,int>mp;
           for(auto x : s){
            char ch = x;
            mp[ch]++;
           }
            for(int i=0; i<s.size(); i++){
                if(mp.find(s[i])!=mp.end() && mp[s[i]]==1){
                    return i;
    
                }
            }
            return -1;
        }
    };
int main(){
    return 0;
}