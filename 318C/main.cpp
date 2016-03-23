#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool solve(int *p,int n){
    for(int j=0;j<n;j++){
        while(!(p[j]&1)){
            p[j]>>=1;

        }
        while(!(p[j]%3)){
            p[j]/=3;

        }

    }
   /*  for(int j=0;j<n;j++){
            cout<<p[j]<<" ";
    }
    cout<<endl;*/
    for(int j=1;j<n;j++){
        if(p[j]!=p[j-1])
            return false;
    }
    return true;

}


int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    bool ans=solve(ar,n);
    if(ans)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
