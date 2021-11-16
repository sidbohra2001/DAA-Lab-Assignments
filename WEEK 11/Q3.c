#include <bits/stdc++.h>
using namespace std;

bool checkSum(int arr[], int n, int sum){
    if(sum==0) return true;
    if(n<0 || sum<0) return false;
    if(checkSum(arr, n-1, sum-arr[n])) return true;
    if(checkSum(arr, n-1, sum)) return true;
    return false;
}

bool checkPartition(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++) sum+=arr[i];
    if(sum%2==1) return false;
    return checkSum(arr, n-1, sum/2);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    if(checkPartition(arr, n)) cout<<"yes";
    else cout<<"no";
}
