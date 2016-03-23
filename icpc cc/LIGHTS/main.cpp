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

int main()
{
    int t,m,n,k,cnt;
    cin>>t;
    char l;
    while(t--){
        cin>>n>>m>>k;
        int a[n];
        forall(y,0,n){
            cnt=0;
            forall(z,0,m){
                cin>>l;
                if(l=='.') cnt++;
            }
            a[y]=cnt;
        }
        sort(a,a+n,greater<int>());
        int ons=0;
        int i=0,ctr=0;
        while(a[i]>=m-a[i] && ctr<k && i<n){
            ons+=a[i];
            i++;
            ctr++;
        }
        if(i==n){
            if((k-ctr)%2)
                ons=ons-a[i-1];
        }
        else if(i<k && a[i]<m-a[i]) {
            if((k-ctr)%2){
              //  ons=max(ons+a[i],i>0?ons-a[i-1]+m-a[i-1]:0);
                if(ons+a[i]>(i>0?ons-a[i-1]+m-a[i-1]:0)) { ons=ons+a[i];i++;}
                else {ons=i>0?ons-a[i-1]+m-a[i-1]:0;}
                }
        }
        int j=i;
        while(j<n){
                ons+=m-a[i];j++;}

        cout<<ons<<"\n";
    }
    return 0;
}
