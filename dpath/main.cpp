#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector<int> v[10000];
int ans[13][13] = {{1,2,3},{0,4,5},{0,6,7,8},{0,9},{1},{1},{2},{2},{2},{3,10,11},{9},{9,12},{11}};
bool visited[13];
vector <int> f;

void func(int u,vector<int> &p)
{
    visited[u] = true;
    int fl=1;
   // cout<<u<<" ";
    for(int i=0;i<13;i++){
        if(ans[u][i]!=0 && !visited[ans[u][i]]){
        fl=0;
            p.push_back(ans[u][i]);
            func(ans[u][i],p);
            p.pop_back();
        }
        //if(visited[ans[u][i]])
        }
    if(fl)
    {
        for(int i=0;i<p.size();i++)
            cout<<p[i]<<" ";
        cout<<endl;
    }

}

int main()
{
    //cout << "Hello world!" << endl;
  //  int n,m;
   // cin>>n>>m;
    //for(int i=0;i<)
    vector<int>p;
    func(0,p);

    return 0;
}
