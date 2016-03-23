#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<VI> VII;

int main()
{
    ios_base::sync_with_stdio(0);
    int t,n,m,u,v;
    cin>>t;
    while(t--){
        cin>>n>>m;
        VII graph(n);
        forall(i,0,m){
            cin>>u>>v;
            graph[u-1].push_back(v-1);
            graph[v-1].push_back(u-1);
        }
        int nodd=0;int flg=0;
        forall(i,0,n){
            if((graph[i].size())%2==1)
                nodd++;
            if(nodd>2)
            {  flg=1;break;}
        }
        if(flg)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
