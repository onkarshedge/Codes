#include <iostream>
#include<bits/stdc++.h>
using namespace std;

typedef pair<long int,long int> pi;
typedef vector<pi> vp;

int main()
{

    long int n,r,avg,cravg=0,a,b;
    cin>>n>>r>>avg;
    vp marks;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        marks.push_back(make_pair(b,a));
        cravg+=a;
    }
    avg=avg*n;
    sort(marks.begin(),marks.end());
    long int essays=0;
    double inc=1;
    for(int i=0;i<marks.size() && cravg<avg;i++){
        long int st=marks[i].second;
        long o=min((r-st),(avg-cravg));
            cravg+=o*inc;essays+=o*marks[i].first;
    }
    cout<<essays<<"\n";
    return 0;
}
