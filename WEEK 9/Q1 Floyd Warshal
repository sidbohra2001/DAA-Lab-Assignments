#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> floydWarshal(vector<vector<int>> weights, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(weights[i][j]>weights[i][k]+weights[k][j] && weights[i][k]<INT_MAX && weights[k][j]<INT_MAX)
                    weights[i][j] = weights[i][k] + weights[k][j];
            }
        }
    }
    return weights;
}

int main(){
    int n, num;
    cin>>n;
    vector<vector<int>> weights;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            cin>>num;
            if(num==-1) temp.push_back(INT_MAX);
            else temp.push_back(num);
        }
        weights.push_back(temp);
    }
    vector<vector<int>> path = floydWarshal(weights, weights.size());
    cout<<"Shortest Distance Matrix: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                if(path[i][j]==INT_MAX)
                    cout<<"INF ";
                else
                    cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
}
