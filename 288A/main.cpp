#include <bits/stdc++.h>

using namespace std;
#define forall(i,a,b)   for(int i=a;i<b;i++)

int paint[1002][1002];

bool check(int x,int y,int n,int m){
    int ch=0;
    if((x-1>=0) && (y+1 < m)){
    //    cout<<"inside up rght"<<endl;
        if(paint[x-1][y] && paint[x-1][y+1]&& paint[x][y+1])
            ch=1;
    }
    if((x-1>=0 )&& (y-1 >=0)){
  //   cout<<"inside up left"<<endl;
        if(paint[x-1][y] && paint[x-1][y-1] && paint[x][y-1])
            ch=1;
    }
    if((x+1<n )&& (y+1<m)){
   //  cout<<"inside down rght"<<endl;
        if(paint[x+1][y] && paint[x+1][y+1] && paint[x][y+1])
            ch=1;
    }
    if((x+1<n )&& (y-1 >=0)){
   //  cout<<"inside down left"<<endl;
        if(paint[x+1][y] && paint[x+1][y-1] && paint[x][y-1])
            ch=1;
    }
    return ch;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    memset(paint,0,sizeof(paint));
    int x,y,moves=0;
    int flg=0;
    forall(i,0,k){
        cin>>x>>y;
        x--;y--;
        if(!flg)
            moves++;
        paint[x][y]=1;
        if(!flg && check(x,y,n,m) ){
            flg=1;
            }
    }
    if(flg)
        cout<<moves;
    else
        cout<<"0";
    cout<<"\n";
    return 0;
}
