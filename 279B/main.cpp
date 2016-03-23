#include <iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long int li;
typedef vector<li> vi;
typedef pair<li,li>pai;

int main()
{
    li n;
    cin>>n;
    map<li,int> mp;
    vi p;
    deque<li>q;
    vector<pai> studs;
    li a,b,st,se,r,z;
    for(li i=0;i<n;i++){
        cin>>a>>b;
        studs.push_back(make_pair(a,b));
        if(a==0)
            st=i;
        if(b==0)
            se=i;
        mp[a]++;
        mp[b]++;

    }

   r=studs[st].second;
    p.push_back(r);
    bool fi=0;
   while(!fi){
        li i=0;
        for(;i<n;i++){
            if(studs[i].first==r && studs[i].second!=0){
                r=studs[i].second;
                p.push_back(r);
                break;
            }
        }
        if(i==n)
            fi=1;
   }

  if(n%2==0){
   z=studs[se].first;
   q.push_front(z);
   fi=0;
    while(!fi){
        li i=0;
        for(;i<n;i++){
            if(studs[i].second==z && studs[i].first!=0 ){
                z=studs[i].first;
                q.push_front(z);
                break;
            }
        }
        if(i==n)
            fi=1;
   }

    for(li j=0;j<p.size();j++)
        cout<<q[j]<<" "<<p[j]<<" ";
    cout<<"\n";
   }
   else {
        map<li,int>::iterator it;
        for(it=mp.start;it!=mp.end();it++)
            if(*it==1)

        li j=0;
        for(;j<q.size()-1;j++)
            cout<<q[j]<<" "<<p[j]<<" ";
        cout<<q[j]<<"\n";
   }

    return 0;
}
