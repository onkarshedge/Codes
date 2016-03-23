#include <bits/stdc++.h>

using namespace std;


struct node {
    int cost;
     int dest;
    bool istaxi;

};
struct edge{
    int to;
    int length;
    int taxi;
};

inline bool operator<(const node& lhs, const node& rhs)
{
  if(lhs.cost < rhs.cost)
        return 1;
  else if(lhs.cost > rhs.cost)
        return 0;
   else  return lhs.dest<rhs.dest;

}

typedef vector<node> v;
typedef vector<vector<int> > vv;
typedef set<node> ns;

int dijk(const vector< vector<edge> > &graph, int source, int target){
    set<node> active_vertices;
    vector<int> min_distance( graph.size(), INT_MAX );
    min_distance[ source ] = 0;

    active_vertices.insert( {0,source,0} );
    while (!active_vertices.empty()) {
    int where = active_vertices.begin()->second;
    if (where == target) return min_distance[where];
    active_vertices.erase( active_vertices.begin() );
    for (auto edge : graph[where])
        if (min_distance[edge.to] > min_distance[where] + edge.length) {
        active_vertices.erase( { min_distance[edge.to], edge.to } );
        min_distance[edge.to] = min_distance[where] + edge.length;
        active_vertices.insert( { min_distance[edge.to], edge.to } );
    }
}
return INT_MAX;

return 0;
}

int main()
{
    int t,n,m,d,txi,x,y,src,des;
    cin>>t;
    while(t--){
    vector<vector<edge> >graph;
    cin>>n;
    graph.clear();
    graph.resize(n);cin>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y>>d>>txi;
        graph[x].push_back({y,d,txi});
        graph[y].push_back({x,d,txi});
    }
    cin>>src>>des;
    cout<<dijk(graph,src,des)<<endl;
    }
    return 0;
}
