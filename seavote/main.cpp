#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,b;
    cin>>t;
    while(t--){
        cin>>n;
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>b;
            sum+=b;
            }
            if(sum<100)
                cout<<"NO\n";
            else {
                sum=sum-100;
                    if(sum<n)
                        cout<<"YES\n";
                    else
                        cout<<"NO\n";

            }
    }
    return 0;
}
