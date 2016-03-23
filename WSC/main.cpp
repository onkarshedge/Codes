#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[20][20];
    int n,m,t;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        cin>>n>>m;
        int x,y;
        for(int i=0;i<m;i++){
            a[x][y]=1;
            a[y][x]=1;
        }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if


    }

    return 0;
}
