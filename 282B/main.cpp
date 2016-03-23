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

ll factors(ll num,ll b){
    ll div,cnt=0;
    set<ll>cvs;
    for(ll i=1;i*i<=num;i++){
       div=num%i;
       if(div==0){
            if(i>b)
                cvs.insert(i);
            if(num/i >b)
                  cvs.insert(num/i);
       }

    }
return cvs.size();
}

int main()
{
    ll a,b,x,n,m;
    cin>>a>>b;
    if(b==a)
        cout<<"infinity\n";
    else if(b>a)
        cout<<"0\n";
    else {
        x=a-b;
        m=factors(x,b);
        cout<<m<<endl;

    }
    return 0;
}
