#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
    long int n,m,a;
    cin>>n>>m;
    map<int,int> win;
    for(int i=0;i<m;i++)
    {
        long int ma=-1,pos;
        for(int j=0;j<n;j++){
            cin>>a;
            if(ma<a){
                ma=a;
                pos=j+1;
                }
        }
        win[pos]++;
    }
    /* for(map<int,int>::iterator it=win.begin();it!=win.end();it++){

            cout<<it->first<<" ";
            cout<<it->second;
            cout<<endl;

    }*/
    int ans=-1;int v=1;
    for(map<int,int>::iterator it=win.begin();it!=win.end();it++){
        if(ans<it->second){
            v=it->first;
            ans=it->second;
        }
    }
    cout<<v<<"\n";
    return 0;
}
