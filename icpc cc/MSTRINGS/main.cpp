#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(ui i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
        ui n,k;
        cin>>n>>k;
        cin>>s;
        bool bt=false;
        char last=s[n-1];
        forall(i,n-k,n-1){
            if(s[i]!=last){
                cout<<"-1\n";
                bt=true;
                break;
            }

        }
        if(bt) continue;
        ll ans=1;
        bool frst=true,lp=false;int cnt=0;
        forall(i,0,n-k){
            cnt=1;
            while(s[i]==s[i+1] && cnt<k && i<n-k){
                if(frst) ans++;
                frst=false;
                i++;
                cnt++;
                lp=true;
                }
            if(!lp) ans++;
            lp=false;
            frst=true;

        }
        cout<<ans<<"\n";
    }
    return 0;
}
