#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int dp[2005][2005];
    int n,k;
    cin>>n>>k;
    memset(dp,0,sizeof(dp[0][0])*(n+2)*(k+2));

    for(int i=1;i<=k)
        dp[1][i]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=k;j++){
            for(int k=j;k<=1;k--){
                if(j%k==0)
                    dp[i][j]+=
            }
            ]
        }

    }
    return 0;
}
