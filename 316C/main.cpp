#include <bits/stdc++.h>
using namespace std;

int fs(string s){
    int cnt=0,glcnt=0;
    int i=0;
    for(;i<s.size();i++){
        if(s[i]=='.')
            cnt++;
        else {
            if(cnt>=2)
                glcnt+=cnt-1;
             cnt=0;
            }
    }
    if(cnt>=2)
        glcnt+=cnt-1;
return glcnt;
}


int main()
{
    ios::sync_with_stdio(0);
    int n,m,ans;
    cin>>n>>m;
    string ab;
    cin>>ab;
    ans=fs(ab);
    //cout<<ans;
    char ch;int va;
    for(int j=0;j<m;j++){
        cin>>va>>ch;va--;
   //     cout<<ab<<endl;
        if(ch!='.'){
            if(ab[va]=='.'){
                if(va-1>=0 && ab[va-1]=='.')
                    ans--;
                if(va+1<n && ab[va+1]=='.')
                    ans--;
            }
            cout<<ans<<"\n";
        }
        else{
            if(ab[va]!='.'){
                if(va-1>=0 && ab[va-1]=='.')
                    ans++;
            if(va+1<n && ab[va+1]=='.')
                    ans++;
            }
            cout<<ans<<"\n";
        }
        ab[va]=ch;
    }
    return 0;
}
/*
4 4
.cc.
2 .
3 .
2 a
1 a
*/
