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
int main()
{
    int n,k,t;
    cin>>n>>k;
    VII a;
    VI ans;
    forall(i,0,n){
        cin>>t;
        a.push_back(make_pair(t,i));
    }
    sort(a.begin(),a.end());
    ll sum=0;
    for(int i=0;i<n && sum+a[i].first<=k;i++){
        sum+=a[i].first;
        ans.push_back(a[i].second+1);
    }
    cout<<ans.size()<<endl;
    if(ans.size()!=0){
    for(int j=0;j<ans.size();j++){
        cout<<ans[j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
