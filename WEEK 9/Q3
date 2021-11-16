#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, num, sum=0;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0; i<n; i++){
        cin>>num;
        q.push(num);
    }
    while(q.size()>1){
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        q.push(a+b);
        sum += a+b;
    }
    cout<<sum<<endl;
}
