#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ul unsigned long int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<ll> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef map<int,ll> MP;


int main()
{
    ll t,n;
    ll s;
    cin>>t;
    while(t--){
    cin>>n>>s;
    ll actual=(n*(n+1))/2;
    ll fnd=actual-s;
    ll st=n-1;
    ll cnt=0;
    while(fnd>=1){
        fnd=fnd-st;
        st=st-1;
        cnt++;
    }
    cout<<cnt<<"\n";
    }
    return 0;
}
