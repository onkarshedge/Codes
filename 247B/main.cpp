#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6];
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
            cin>>a[i][j];

    long long int total,maxi=-1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
                if(j==i)
                    continue;
                for(int k=1;k<=5;k++){
                    if(k==i || k==j)
                        continue;
                    for(int l=1;l<=5;l++){
                        if(l==k || l==j || l==i)
                            continue;
                        for(int m=1;m<=5;m++){
                            if(m==l || m==k || m==j || m==i)
                                continue;
                            total=a[i][j]+a[j][i]+a[k][l]+a[l][k]+a[j][k]+a[k][j]+a[l][m]+a[m][l]+a[k][l]+a[l][k]+a[l][m]+a[m][l];
                            if(total>maxi)
                                maxi=total;

                    }
                }
            }
        }
    }
    cout<<maxi<<"\n";
    return 0;
}
