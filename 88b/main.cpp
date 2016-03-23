#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int ed;
bool dist(int x1,int y1,int x2,int y2){
        double ans=sqrt(pow(y2-y1,2)+pow(x2-x1,2));
     /*   cout<<x1<<y1<<x2<<y2<<endl;
        cout<<ans;*/
        if(ans<=ed)
            return true;
        else
            return false;

}

int main()
{
    typedef map<char,pair<int,int> > mp;
    typedef vector<pair<int,int> > vec;
    vec v;vec::iterator vit;
    mp keyb;
    mp::iterator it;
    int n,m,q;
    cin>>n>>m>>ed;
    char ch;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>ch;
            if(ch!='S')
            keyb.insert(make_pair(ch,make_pair(i,j)));
            else
                v.push_back(make_pair(i,j));
        }
    }
 /*   for(it=keyb.begin();it!=keyb.end();it++){
        cout<<it->first<<"\t"<<it->second.first<<it->second.second<<endl;
    }
    for(vit=v.begin();vit!=v.end();vit++)
        cout<<vit->first<<"\t"<<vit->second<<endl;*/

    cin>>q;
    string stmnt;
    cin>>stmnt;
    long int cnt=0;
    for(int i=0;i<stmnt.length();i++){
        char c=stmnt[i];
        if(keyb.find(tolower(c))==keyb.end()){
            cout<<"-1\n";
            return 0;
            }
        char dc=stmnt[i];
        if(isupper(dc)){
            dc=tolower(dc);
            if(v.empty()){
                cout<<"-1\n";
                return 0;
                }
            bool flag=false;
            for(int j=0;j<v.size();j++){
                if(dist(keyb[dc].first,keyb[dc].second,v[j].first,v[j].second)){
                    flag=true;
                    break;
                    }
            }
            if(!flag){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
