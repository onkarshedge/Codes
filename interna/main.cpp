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
            interval.push_back(make_pair(a,'1'));
            interval.push_back(make_pair(b,'0'));
        }
        sort(interval.begin(),interval.end());
        forall(i,0,interval.size()){
            if(interval[i].second=='1')
                cnt++;
            else
                cnt--;
            if(cnt>mx)
                mx=cnt;
        }
        cout<<mx<<endl;
        }
    return 0;
}
