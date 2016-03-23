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
    int n,t;
    cin>>n>>t;
    int a[n];
    forall(i,0,n-1){
        cin>>a[i];
    }
    int j=0,flg=0;
    t=t-1;
    while(j<n){
        if(j==t){
            flg=1;
            break;
        }
        j=j+a[j];

    }
    if(flg)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
