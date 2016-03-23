#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ma 10000000009
int main()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    char mat[n][m];
    int dp[2][m+2];
    int white[m],black[m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mat[i][j];

    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++) {
            if(mat[j][i]=='#')
                sum++;

        }
        black[i]=sum;
        white[i]=n-sum;
    }
    int prew[m+2],preb[m+2];
    prew[0]=0;preb[0]=0;
    for(int k=0;k<m;k++){
        prew[k+1]=prew[k]+white[k];
        preb[k+1]=preb[k]+black[k];
    }
 /*   cout<<"whites\n";
    for(int i=0;i<m;i++)
        cout<<white[i]<<"  ";
    cout<<"\nblacks\n";
    for(int i=0;i<m;i++)
        cout<<black[i]<<"  ";
    cout<<"\nprew\n";
    for(int i=0;i<m+1;i++)
        cout<<prew[i]<<"  ";
    cout<<"\npreb\n";
    for(int i=0;i<m+1;i++)
        cout<<preb[i]<<"  ";
    cout<<endl;*/
    dp[0][0]=dp[1][0]=0;
    long long int minw,minb;
    for(int i=1;i<=m;i++){
        minw=ma;
        minb=ma;
        for(int j=x;j<=y && i-j>=0;j++){
            if(minw>dp[1][i-j]+prew[i]-prew[i-j])
                minw=dp[1][i-j]+prew[i]-prew[i-j];
            if(minb>dp[0][i-j]+preb[i]-preb[i-j])
                minb=dp[0][i-j]+preb[i]-preb[i-j];
        }
        dp[0][i]=minw;
        dp[1][i]=minb;
    }
    cout<<min(dp[0][m],dp[1][m])<<endl;
  /*  for(int g=0;g<2;g++){
        for(int v=0;v<m+1;v++)
            cout<<dp[g][v]<<"  ";
            cout<<endl;
        }*/
    return 0;
}
