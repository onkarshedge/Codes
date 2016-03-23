#include <bits/stdc++.h>

using namespace std;

typedef map<string,bool> mp;
int main()
{
    mp lib;
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
    cin>>s;
    lib[s]=!lib[s];
    }
    int cnt=0;
     for(mp::iterator it=lib.begin();it!=lib.end();it++){
    if(it->second==true)
        cnt++;

    }
    cout<<cnt<<endl;
    }

    return 0;
}
