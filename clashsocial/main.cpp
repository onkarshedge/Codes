#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int> > vv;

int dfs_count(int u,int cnt){

        visited[u]=1;
        cnt++;
    for(int j=0;j<gr[u].size();j++){
        if(!visited[gr[u][j]])
            dfs_count(gr[u][j]);
    }

}


int main()
{
    int n,t,x,y;
    cin>>n;
    cin>>t;
    int cnt[n];
    memset(cnt,0,sizeof(cnt));
    vv graph;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        x--;y--;
        graph[y].push_back(x);
    }
    int visited[n];
    for(int j=0;j<n;j++){
        memset(visited,0,sizeof(visited));
        dfs_count(j);

    }
    return 0;
}
