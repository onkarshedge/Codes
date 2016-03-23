#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(ui i=a;i<b;i++)

typedef pair<ll, ll> PII;
typedef vector<ll> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
int main()
{
    int n;
    cin>>n;
    ll a,b;
    VII days;
    VI ex;
    forall(i,0,n){
        cin>>a>>b;
        days.push_back(make_pair(a,b));
    }
    sort(days.begin(),days.end());
    VII::iterator it;
    ex.push_back(min(days[0].first,days[0].second));
    forall(i,1,days.size()){
        if(days[i].second>=ex[i-1])
            ex.push_back(min(days[i].second,days[i].first));
        else
            ex.push_back(days[i].first);
    }
    cout<<*(ex.end()-1)<<"\n";
    return 0;
}
