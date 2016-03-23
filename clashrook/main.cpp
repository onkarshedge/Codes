#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string.h>

using namespace std;

typedef pair<int,int> pi;
int dist[8][8],visited[8][8];
const long int inf=1e8;

int xs[]={1,2,2,1,-1,-2,-2,-1};
int ys[]={2,1,-1,-2,-2,-1,1,2};

bool is_safe(int x,int y,int rx,int ry){
        if(x>0 && x<8 && y>0 && y<8)
            if(!((x==rx) ^ (y==ry)))
                return true;
        return false;

}

int main()
{

    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            dist[i][j]=inf;
    memset(visited,0,sizeof(visited));
    int kx,ky,rx,ry,dx,dy,xx,yy,x,y;
    cin>>kx>>ky>>rx>>ry;
    queue<pair<int,int> >Q;
    dist[kx][ky]=0;
    Q.push(make_pair(kx,ky));
    bool ans=false;
    while(!Q.empty()){
       pi node=Q.front();
       x=node.first;y=node.second;
        Q.pop();
        if(x==rx && y==ry){
            ans=true;
            break;
        }
        for(int k=0;k<8;k++){
            dx=xs[k];dy=ys[k];
            xx=x+dx;yy=y+dy;
            if(is_safe(xx,yy,rx,ry)){
                if(dist[xx][yy]==inf){
                    dist[xx][yy]=dist[x][y]+1;
                    Q.push(make_pair(xx,yy));
                }

            }
        }

    }
    if(ans)
        cout<<dist[rx][ry]<<"\n";
    else
        cout<<"0";
    return 0;
}
