#include <iostream>
#include<bits/stdc++.h>
using namespace std;

unsigned long long int coeff(unsigned long int c,unsigned long int k){
    unsigned long long int ans=1;
    if(k>c-k)
        k=c-k;
    for(unsigned int i=0;i<k;i++){
        ans=ans*(c-i);
        ans=ans/(i+1);
    }
    return ans;

}

int main()
{
    long int t,n,r;
    cin>>t;
    while(t--){
    cin>>r>>n;
    unsigned long long int ans=coeff(n+r-1,r-1);
    cout<<ans<<"\n";
    }
    return 0;
}
