#include <bits/stdc++.h>

using namespace std;

int main()
{

    string inp;
    cin>>inp;
    vector<int>ans;
    int l=inp.size();
    if(!((inp[l-1]-'0')&1))
        ans.push_back(1);
    else
        ans.push_back(0);
    for( int i=l-2;i>=0;i--){
        if(!((inp[i]-'0')&1))
            ans.push_back(ans[ans.size()-1]+1);
        else
            ans.push_back(ans[ans.size()-1]);
    }
    for( int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
