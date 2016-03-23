#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string chesb[n];
    for(int i=0;i<n;i++)
        cin>>chesb[i];
    char col[2]={'W','B'};
    int var;
    for(int i=0;i<n;i++){
        var=i%2;
        for(int j=0;j<chesb[i].length();j++){
            var=!var;
            if(chesb[i][j]=='-')
                continue;
            chesb[i][j]=col[var];

        }

    }
    for(int i=0;i<n;i++)
        cout<<chesb[i]<<"\n";
    return 0;
}
