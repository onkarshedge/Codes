#include <bits/stdc++.h>

using namespace std;
#define forall(i,a,b) for(int i=a;i<b;i++)

int main()
{
    ios_base::sync_with_stdio(0);
    int t,n,a,b,cnt;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n;
        vector<pair<int,int > >interval;
        priority_queue<int,vector<int>,greater<int> >epts;
        forall(i,0,n){
            cin>>a>>b;
            interval.push_back(make_pair(a,b));
        }
        sort(interval.begin(),interval.end());
      //  epts.push(interval[0].second);
        forall(i,0,n){
            if(epts.empty()){
                    epts.push(interval[i].second);
                    cnt++;
                }

            else if(interval[i].first>epts.top()){
                cnt++;
                epts= priority_queue<int,vector<int>,greater<int> >();
                epts.push(interval[i].second);
                }
            else {
                epts.push(interval[i].second);
            }

        }
        cout<<cnt<<"\n";
    }
    return 0;
}
