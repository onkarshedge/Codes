#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[50002][6];long int dp[50002][6];
    int n,p;
    cin>>n>>p;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=p;j++) {
            cin>>data[i][j];
        }
     }
     for(int i=0;i<n+1;i++)
            dp[i][0]=0;
    for(int i=0;i<6;i++)
            dp[0][i]=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=p;j++)
            dp[i][j]=max(dp[i-1][j],dp[i][j-1])+data[i][j];
      cout<<dp[i][p]<<" ";
    }
    cout<<"\n";
    return 0;
}
