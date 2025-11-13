#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> pre_sum(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        pre_sum[i]=pre_sum[i-1]+v[i-1];
    }
    for (int x : pre_sum){
        cout<<x<<" ";
    }
}