#include <bits/stdc++.h>


using namespace std;

map<pair<int,int>,int> dp;

int fun(int n,int m,int k){
    if(k<=0)
    {dp[make_pair(n,m)]=__gcd(n,m) ;
    return __gcd(n,m);}
    else if(dp.count(make_pair(n,m))]) return dp[make_pair(n,m)];
    dp[make_pair(n,m)]=max(fun(n-1,m,k-1)),fun(n,m-1,k-1),fun(n+1,m,k-1),fun(n,m+1,k-1),fun()

}




int main()
{

    int t,n,m;
    cin>>t;
    while(t--){
    cin>>n>>m;
    cout<<fun(n)<<"\n";
    }
    return 0;
}
