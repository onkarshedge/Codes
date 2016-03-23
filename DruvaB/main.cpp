#include <bits/stdc++.h>

using namespace std;

int mod=1e9+7;


struct sort_pred {
    bool operator()(const pair<long,int> &left, const pair<long,int> &right) {
         if(left.first < right.first) return true;
         else if(left.first > right.first) return false;
         else
            return left.second > right.second;

    }
};

int main()
{
    int n,k,t;
    cin>>t;
    while(t--){
    cin>>n>>k;
    int tot=1<<n;
    vector<pair<long,int> >sol;
    int ar[k][n];
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++)
            cin>>ar[i][j];
    }
    for(int i=0;i<tot;i++){
        if(i==0) continue;
        int d=__builtin_popcount(i);
        long ans=1,p;
        for(int j=0;j<n;j++){
            long sum=0;
            if((i & (1<<j))!=0){
                for(int l=0;l<k;l++){
                    sum+=ar[l][j];
                }
                ans=ans*sum;
            }

        }
        p=ans/d;
        p=p%mod;
        sol.push_back(make_pair(p,d));
    }
    sort(sol.begin(),sol.end(),sort_pred());
    /*for(int i=0;i<sol.size();i++){
        cout<<sol[i].first<<" "<<sol[i].second<<endl;
    }
    */
    long a,b;int x,y;
    a=sol.front().first;b=sol.front().second;
    x=sol.back().first;y=sol.back().second;
    cout<<(a^x)<<" "<<(b^y)<<endl;
    }
    return 0;
}
