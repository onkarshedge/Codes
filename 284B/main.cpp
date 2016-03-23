#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef map<string,string> dict;



int main()
{
    dict trans;
    int n,m;
    string a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        trans[a]=b;
    }
    string lec[n];
     for(int i=0;i<n;i++){
        cin>>lec[i];
    }
    for(int i=0;i<n;i++){
        if(lec[i].length()>trans[lec[i]].length()){
            cout<<trans[lec[i]]<<" ";
        }
        else
            cout<<lec[i]<<" ";
    }
    cout<<endl;
    return 0;
}
