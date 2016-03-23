#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

bool isSubsetSum(vector<ll> sst, int n, ll sum,VI &pos)
{
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   if (sst[n-1] > sum)
     return isSubsetSum(sst, n-1, sum,pos);

   if(isSubsetSum(sst, n-1, sum,pos))
        return true;

   if(isSubsetSum(sst, n-1, sum-sst[n-1],pos) )
    {
        pos.push_back(n-1);
        return true;
    }

    return false;
}

int main()
{
    int t,n,k;
    ll x,total,a;
    cin>>t;
    while(t--){
        vector<ll> sst;
        x=-1;total=0;
        cin>>n>>k;
        forall(i,0,n){
            cin>>a;
            sst.push_back(a);
            if(x<a)
                x=a;
            total+=a;
        }
        if(k>n)
            cout<<"no\n";
        else if(total==0)
            cout<<"yes\n";
        else if(!total%k || x>(total/k)){
            cout<<"no\n";
        }
        else {
                sort(sst.begin(),sst.end(),greater<int>());
                int n = sst.size(),flg=0;
                ll sum=total/k;
                vector<int> pos;
                for(int j=0;j<k-1;j++)
                {
                if (isSubsetSum(sst, n, sum,pos) == true){
           //        printf("Found a subset with given sum\n");
                    int cnt=0;
                    for(int i=0;i<pos.size();i++){
          //             cout<<pos[i]<<" ";
                    sst.erase(sst.begin()+pos[i]-cnt);
                    cnt++;
                    }
          //          for(int i=0;i<sst.size();i++)
          //             cout<<sst[i]<<" ";
                n=sst.size();
                pos.clear();
                }
                else {
          //          printf("No subset with given sum\n");
                    flg=1;
                    break;
                    }
                }
            if(flg)
                cout<<"no\n";
            else
                cout<<"yes\n";
        }
    }
    return 0;
}
