#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,l,r;
    int ans=0,prev_st=1,diff;
    cin>>n>>x;
    for(int i=0;i<n;i++){
            cin>>l>>r;
            diff=(l-prev_st)%x;
            diff+=r-l+1;
            ans+=diff;
            prev_st=r+1;
    }
    cout<<ans<<"\n";
    return 0;
}
