#include <iostream>
#include<bits/stdc++.h>
using namespace std;

typedef vector<pair<int,int> > vvi;
typedef vector<int> vi;
typedef double lli;
#define FOR(i,a,b) for(int (i)=(a);(i)<(b);(i)++)

int main()
{
    cout.precision(12);cout.setf(ios_base::fixed);
    int n,m;
    cin>>n>>m;
    vvi graph[n+5];
    vi vertex_cost;
    int temp,a,b,c;
    lli v_sum=0,e_sum=0;
    FOR(i,0,n) {
        cin>>temp;
        vertex_cost.push_back(temp);
        v_sum+=temp;
        }
    FOR(i,0,m){
        cin>>a>>b>>c;
        a--;b--;
        graph[a].push_back(make_pair(b,c));
        graph[b].push_back(make_pair(a,c));
        e_sum+=c;
    }
    double ans=v_sum/e_sum;
   FOR(i,0,n){
    double v=vertex_cost(i);
    double ecs=0;
        FOR(j,0,graph[i].size())
            ecs+=graph[i][j].second;

   }
    return 0;
}
