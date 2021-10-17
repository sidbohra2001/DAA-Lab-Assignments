#include<bits/stdc++.h>
using namespace std;

int maxWeight(int weight[], bool included[], int v){
    int maxi=INT_MIN, max_index;
    for(int i=0; i<v; i++){
        if(!included[i] && weight[i]>maxi){
            maxi = weight[i];
            max_index=i;
        }
    }
    return max_index;
}

vector<int> prims(vector<vector<int>> graph, int v, int src){
    int weight[v];
    vector<int> parent(v);
    bool included[v];
    for(int i=0; i<v; i++) weight[i]=0, included[i]=false;
    weight[src] = INT_MAX;
    parent[src] = -1;
    for(int i=0; i<v-1; i++){
        int u = maxWeight(weight, included, v);
        included[u] = true;
        for(int j=0; j<v; j++){
            if(graph[u][j] && !included[j] && graph[u][j]>weight[j]) parent[j] = u, weight[j] = graph[u][j];
        }
    }
    return parent;
}


int main(){
    int v, e, s, d, w, sum=0;
    cin>>v>>e;
    vector<vector<int>> g;
    vector<int> temp;
    for(int i=0; i<v; i++){
        temp.push_back(0);
    }
    for(int i=0; i<v; i++){
        g.push_back(temp);
    }
    for(int i=0; i<e; i++){
        cin>>s>>d>>w;
        g[s][d] = w;
    }
    vector<int> parent = prims(g, v, 0);
    for(int i=1; i<v; i++){
        int w = g[parent[i]][i];
        sum += w;
    }
    cout<<sum<<endl;
}
