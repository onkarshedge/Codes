#include <bits/stdc++.h>

using namespace std;
int gcd(int n,int m){
    int r;
    while(n%m!=0){
        r=n%m;
        n=m;
        m=r;
    }
   return m;
}

int main() {
    int n,t,mt;
    cin>>mt;
    while(mt--){
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
            cin>>a[i];
    int l,r;
    while(t--){
            cin>>l>>r;
            int ans=a[0];
            if(l!=1){
            for(int i=1;i<l-1;i++)
                ans=gcd(ans,a[i]);
            }
            if(r!=n){
                if(l==1)
                    ans=a[r];
                else
                    ans=gcd(ans,a[r]);
            for(int i=r+1;i<n;i++)
                ans=gcd(ans,a[i]);
            }
         cout<<ans<<endl;

        }
    }
    return 0;
}
