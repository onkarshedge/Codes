#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,k,var,sr;
    int arr[100005];
    vector<int>v;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>var;
        v.push_back(var);
    }
     for(int i=0;i<n;i++){
        cin>>sr;
    }
    sort(v.begin(),v.end(),greater<int>());
    arr[0]=v[0];

    for(int i=1;i<n;i++){
        arr[i]=arr[i-1]+v[i];
    }
    while(q--){
    cin>>k;
    cout<<arr[k-1]<<endl;
    }
    return 0;
}
