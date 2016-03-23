#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    typedef vector<pair<int,int> > vp;
    int n,a,b;
    cin>>n;
    vp laps;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        laps.push_back(make_pair(a,b));
    }
    sort(laps.begin(),laps.end());
    int flg=0;
    for(int i=0;i<n-1;i++){
        if(laps[i].second>laps[i+1].second)
                flg=1;
    }
    if(flg)
        cout<<"Happy Alex\n";
    else
        cout<<"Poor Alex\n";

    return 0;
}
