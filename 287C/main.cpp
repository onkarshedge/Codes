#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    vector<ll> myvector;
    int h;ll n;
    ll var=pow(2,h+1);
    ll start=var-1;
    myvector.push_back(start);
    int flg=1,cnt=0;
    for(ll i=1;i<=pow(2,h+1);i++){
        if(cnt%2==0)
        if(flg)
        myvector.push_back(myvector[i-1]);
        else
            myvector.push_back(myvector[i+1]);
        flg=!flg;
        cnt++;
    }
    return 0;
}
