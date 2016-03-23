#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout.precision(12);
    long int n,l;double se,tm;
    cin>>n>>l;
    se=l;
    vector<double>po;
    for(long int i=0;i<n;i++){
        cin>>tm;
        po.push_back(tm);
    }
    sort(po.begin(),po.end());
    double r1=(po[0]-0.0),r2=(se-*(po.end()-1));
    double maxi=max(r1,r2),dif;
  //  cout<<maxi<<endl;
    for(long int i=0;i<po.size()-1;i++){
        dif=(po[i+1]-po[i])/2;
       // cout<<"dif "<<dif<<endl;
        if(dif>maxi)
            maxi=dif;
    }
    cout<<fixed<<maxi<<"\n";
    return 0;
}
