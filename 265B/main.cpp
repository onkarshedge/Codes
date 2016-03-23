#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c,cnt=0,clicks=0;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c==0){
            if(cnt!=0)
                clicks++;
            cnt=0;
            }
        else{
            cnt++;
            clicks++;
        }
    }
    if(!c && clicks)
        clicks--;
    cout<<clicks<<"\n";
    return 0;
}
