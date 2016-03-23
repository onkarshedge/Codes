#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef map<int,int>mp;

int main()
{
    mp apps;
    int n,m,k,vr;
    cin>>n>>m>>k;
    forall(i,0,n){
    cin>>vr;
        apps[vr]=i;
    }
    ll cnt=0,screen;
    forall(i,0,m){
        cin>>vr;
        screen=apps[vr]/k+1;
        cnt+=screen;
        apps[vr]-=1;
    }
    return 0;
}
