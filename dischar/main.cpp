#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    int vis[30];
    memset(vis,0,sizeof(vis));
    int count;
    while(t--){
        memset(vis,0,sizeof(vis));
        count=0;
        string s;
        cin>>s;
        for(unsigned int i=0;i<s.length() && count<=26;i++){
            if(!vis[s[i]-'a']){
                count++;
                vis[s[i]-'a']=1;
                }
        }
        cout<<count<<"\n";

    }
    return 0;
}
