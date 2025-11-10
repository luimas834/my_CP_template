#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //making all possible combinations of an array
    for(int mask=0;mask<(1<<n);mask++){
        // initializeing variable or something
        // like int sum of this subset;
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                /*write your logic like
                sum of this subset +=a[];*/
            }

        }
    }
}