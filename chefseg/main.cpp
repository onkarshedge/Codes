#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double x,ans=0;
    long long int k;
    long int level;
    cin>>t;
    while(t--){
        cin>>x>>k;
        level=log(k)/log(2);
        ++level;
        double start=x/pow(2,level),parlvl=start;
        ans=start;
     //   cout<<start<<endl;
        while(level>1){
            parlvl=parlvl*2;
                if(k%2==1)
                    ans+=parlvl;
             level--;
             k=k/2;
         }
    cout<<fixed<<ans<<endl;

    }
    return 0;
}
