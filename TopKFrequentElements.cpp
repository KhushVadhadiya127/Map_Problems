#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            vector<int>ans;
            if(nums.size()==0) return {0};
            unordered_map<int,int>m;
            for(auto x : nums){
                m[x]++;
            }
            priority_queue<pair<int,int>>pq;
            for(auto x : m){
                pq.push({x.second,x.first});
            }
            for(int i =0; i<k; i++){
                ans.push_back(pq.top().second);
                pq.pop();
            }
            return ans;
    
            
        }
    };
int main(){
    return 0;
}