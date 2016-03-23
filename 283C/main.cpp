#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define forall(i,a,b)   for(int i=a;i<b;i++)
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    forall(i,0,n)
        cin>>s[i];
    int cnt=0,prev=-1,flg=0;
    forall(j,0,m){
    flg=0;
        forall(i,1,n){
            if(s[i][j]<s[i-1][j]){
                if(prev==-1){
                flg=1;
                cnt++;
                break;
                }

                if(prev!=-1 && s[i][prev]==s[i-1][prev]){
                flg=1;
                cnt++;
                break;
                }
            }

        }
        if(!flg)
            prev=j;
    }
    cout<<cnt<<"\n";
    return 0;
}
