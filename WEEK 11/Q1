#include <bits/stdc++.h>
using namespace std;

int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k)
                + MatrixChainOrder(p, k + 1, j)
                + p[i - 1] * p[k] * p[j];

        if (count < min)
            min = count;
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    cin>>arr[0]>>arr[1];
    for(int i=2; i<=n; i++) {
        cin>>arr[i];
        cin>>arr[i];
    }
    cout<<MatrixChainOrder(arr, 1, n);
}
