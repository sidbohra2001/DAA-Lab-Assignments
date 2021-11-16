#include<bits/stdc++.h>
using namespace std;

bool comp(vector<float>& a, vector<float>& b){
    return a[0] > b[0];
}

int main(){
    int n;
    float profit=0, weight;
    cin>>n;
    int weights[n], profits[n];
    vector<vector<float>> arr(n);
    vector<pair<int, int>> result;
    for(int i=0; i<n; i++) cin>>weights[i];
    for(int i=0; i<n; i++) cin>>profits[i];
    cin>>weight;
    for(int i=0; i<n; i++){
        arr[i].push_back((float)profits[i]/weights[i]);
        arr[i].push_back(weights[i]);
        arr[i].push_back(profits[i]);
        arr[i].push_back(i+1);
    }
    sort(arr.begin(), arr.end());
    for(int i=n-1; i>=0; i--){
        if(weight > arr[i][1]){
            weight -= arr[i][1];
            profit += arr[i][2];
            result.push_back(make_pair(arr[i][3], arr[i][1]));
        }
        else{
            profit += weight*arr[i][0];
            result.push_back(make_pair(arr[i][3], weight));
            break;
        }
    }
    cout<<"Maximum value: "<<std::setprecision(4)<<profit<<endl;
    cout<<"Item - Weight\n";
    for(auto item: result) cout<<item.first<<" - "<<item.second<<endl;
}
