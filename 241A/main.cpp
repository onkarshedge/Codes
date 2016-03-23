#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int minl=-1e9-1,maxr=1e9+1,x;
    char op;
    string q;
    for(int i=0;i<n;i++){
        cin>>q>>x>>op;
        if(q==">")
            op=='Y'?minl=max(minl,x+1):maxr=min(x,maxr);
        else if(q=="<")
            op=='Y'?maxr=min(maxr,x-1):minl=max(x,minl);
        else if(q==">=")
            op=='Y'?minl=max(x,minl):maxr=min(x-1,maxr);
        else if(q=="<=")
            op=='Y'?maxr=min(x,maxr):minl=max(x+1,minl);
    }
    if(maxr<minl)
        cout<<"Impossible\n";
    else
        cout<<minl+rand()%(maxr-minl+1)<<endl;
    return 0;
}
