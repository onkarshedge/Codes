#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,x,y,x_n,y_n;
    cin>>r>>x>>y>>x_n>>y_n;
    double dist=sqrt(pow(x-x_n,2)+pow(y-y_n,2));
   // cout<<dist;
    int d=ceil(dist);
    r=2*r;
    int rem=d%r;
    if(rem==0)
        cout<<d/r<<"\n";
    else{
        int val=d+r-rem;
        cout<<val/r<<"\n";
    }
    return 0;
}
