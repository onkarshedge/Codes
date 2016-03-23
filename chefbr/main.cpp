#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(int i=a;i<b;i++)


typedef pair<int, int> PII;
typedef vector<ll> VI;
typedef vector<string> VS;
typedef vector<PII> VII;


int main()
{
    ll DP[104][104];
    ll mod=1e9+7;
    memset(DP,0,sizeof(DP));
    int n,j;
    cin>>n;
    ll bracs[n];
    forall(i,0,n)
        cin>>bracs[i];
    forall(l,2,n+1)
      {
         forall(i,0,n-l+1)
         {
            j=i+l-1;
            if(-bracs[i]==bracs[j])
               DP[i][j]=(DP[i+1][j]+DP[i][j-1]+1)%mod;
            else
               DP[i][j]=(DP[i+1][j]+DP[i][j-1]-DP[i+1][j-1])%mod;
         }
      }

    cout<<DP[0][n-1]+1<<endl;
    return 0;
}
