#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<long int>a;
    long int f;
    for(int i=0;i<n;i++){
        cin>>f;
        a.push_back(f);
        }
    sort(a.begin(),a.end(),greater<int>());
    if(n==1)
        cout<<a[0]<<"\n";

    else{
        long long int ans=n*a[0],tm=n;
        for(int i=1;i<n;i++,tm--){
            ans+=tm*a[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}
