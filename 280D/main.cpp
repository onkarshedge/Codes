#include <iostream>
#include<bits/stdc++.h>

using namespace std;
typedef vector<pair<double,char> > vd;
int main()
{
    int n;long int a[100005];
    double x,y,maxi=-1;
    cin>>n>>x>>y;
    x=1.0/x;y=1.0/y;
    vd hits(0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxi)
            maxi=a[i];
    }
    long int i=1,j=1;
    while(hits.size()<=maxi+1){
        if(x*i<y*j) {
            hits.push_back(make_pair(x*i,'a'));i++;
            }
        else {
        hits.push_back(make_pair(y*j,'o'));j++;
        }

    }
//    sort(hits.begin(),hits.end());
  //  vd::iterator it;int cnt=1;
 //   for(it=hits.begin();it!=hits.end();it++,cnt++)
 //       cout<<cnt<<" "<<(*it).first<<" "<<(*it).second<<endl;

    for(int i=0;i<n;i++){
        long int j=a[i]-1;
        if( (j>0 && hits[j].first==hits[j-1].first ) || (j<hits.size()-1 && hits[j].first==hits[j+1].first) )
            cout<<"Both\n";
        else
            {
                cout<<(hits[j].second=='a'?"Vanya\n":"Vova\n");
            }

    }
    return 0;
}
