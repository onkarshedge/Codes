#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define mx 100000
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef map<int,int>mp;
typedef vector<vector<int> >vII;

int dfs_vist[mx];
vII Graph(mx);
int cmpcnt=0;

void dfs(int u) {                       // DFS for normal range
dfs_vist[u] = 1;                         // this vertex is visited, mark it
for(VI::iterator it=Graph[u].begin();it!=Graph[u].end();it++)              // try all neighbors v of vertex u
    if (dfs_vist[*it] == 0){                                 // avoid cycle
        dfs(*it);
        cmpcnt++;
    }                                                      //
}

int main()
{
/*
    t - test cases , n- number of vertices ,k number of flyers
    input format
    t
    n m k    m lines follow
    p q      conected vertices
*/

    int t,n,m,k,p,q;
    cin>>t;
    while(t--){
        memset(dfs_vist,0,sizeof(dfs_vist));
        Graph.clear();
        Graph.resize(mx);
        cin>>n>>m>>k;
        forall(i,0,m){
            cin>>p>>q;
            p--;q--;
            Graph[p].push_back(q);
            Graph[q].push_back(p);
        }
        if(k==0)
        {cout<<"0\n";continue;}
        int numofcomponent=0;
        priority_queue<int,vector<int>, greater<int> > flyer;
        forall(i,0,n){
            cmpcnt=1;
            if(dfs_vist[i]==0){
                numofcomponent++;
                dfs(i);
                cout<<"component number "<<numofcomponent<<" number of members "<<cmpcnt<<endl;
                if(flyer.size()<k)
                    flyer.push(cmpcnt);
                else {
                    if(flyer.top()<cmpcnt){
                        flyer.pop();
                        flyer.push(cmpcnt);
                    }
                }

            }

        }
        int ans=0;
        while(!flyer.empty()){
            ans+=flyer.top();
            flyer.pop();
        }

        cout<<ans<<"\n";
    }
    return 0;
}
