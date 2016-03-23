#include <iostream>
#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

int main()
{
    int t,n,mi=1e5+10,x;
    cin>>t;
    while(t--){
    mi=1e5+10;
    cin>>n;
    int a[n];
    forall(i,0,n){
        cin>>a[i];
        if(mi>a[i])
            mi=a[i];
    }
    sort(a,a+n);
    int ans=1;
    int st=a[0];
    forall(i,1,n){
        if(a[i]==st)
            continue;
        else{
                if(st!=mi)
                ans++;
            }
        st=a[i];
    }
    if(st!=mi )ans++;
    cout<<ans<<"\n";

    }
    return 0;
}
