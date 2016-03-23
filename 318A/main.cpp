#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
    int n,vr,cp,st;
    cin>>n;
    cin>>st;
    cp=st;
    for(int i=1;i<n;i++){
        cin>>vr;
        if(vr>=st){
            st=st+(vr-st)/2+1;
        }
        }
    cout<<st-cp;
    return 0;
}
