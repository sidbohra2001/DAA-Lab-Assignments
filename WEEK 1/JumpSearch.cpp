#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N, key, comparisons = 1, end;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>key;
        int left, index, right;
        int exp=1;
        while(arr[int(pow(2, exp))] < key){
            comparisons++;
            exp++;
            end = pow(2, exp);
            if(pow(2, exp) > N){
                end = N;
                break;
            }
        }
        int i;
        for(i=int(pow(2, exp-1)); i<end; i++){
            comparisons++;
            if(arr[i] == key)
                break;
        }
        if(arr[i]==key)
            cout<<"Present "<<comparisons<<endl;
        else
            cout<<"Not present "<<comparisons<<endl;
    }
}
