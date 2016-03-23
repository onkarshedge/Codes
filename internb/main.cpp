#include <bits/stdc++.h>

using namespace std;
#define forall(i,a,b) for(int i=a;i<b;i++)

int main()
{
    ios_base::sync_with_stdio(0);
    int t,n,a,b,cnt,mx;
    cin>>t;
    while(t--){
        cnt=0;
        mx=0;
        cin>>n;
        vector<pair<int,char > >interval;
        forall(i,0,n){
            cin>>a>>b;
            interval.push_back(make_pair(a,'s'));
            interval.push_back(make_pair(b,'e'));
        }
        sort(interval.begin(),interval.end());
        forall(i,0,interval.size()){
            cnt++
        }
        }
    return 0;
}
