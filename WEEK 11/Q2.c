#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target, num;
    cin>>n;
    vector<int> coins;
    for(int i=0; i<n; i++){
        cin>>num;
        coins.push_back(num);
    }
    cin>>target;
    map<vector<int>, int> mp;
    vector<vector<int>> dp[target+1];
    for(auto coin: coins) dp[coin].push_back({coin});
    for(int i=0; i<=target; i++){
        if(dp[i].size()>0){
            for(auto coin: coins){
                if(i+coin <= target){
                    for(auto row: dp[i]){
                        row.push_back(coin);
                        sort(row.begin(), row.end());
                        if(mp[row]==0)
                            dp[i+coin].push_back(row);
                        mp[row] = 1;
                    }
                }
            }
        }
    }
    cout<<dp[target].size();
}

