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
    int n;
    cin>>n;
    int a[n];
    forall(i,0,n){
        cin>>a[i];
    }
    int mi=-1,ans=1e5;
    forall(i,1,n-1){
        mi=-1;
        forall(j,1,n){
            if(j==i){
                mi=max(mi,a[j+1]-a[j-1]);
                j++;
                }
            else {
            mi=max(mi,a[j]-a[j-1]);
            }
        }
        ans=min(ans,mi);
    }
    cout<<ans<<"\n";
    return 0;
}
