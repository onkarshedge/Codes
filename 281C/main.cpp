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
    ll n;
    cin>>n;
    if(n%2==0)
        cout<<"white\n"<<"1 2"<<endl;
    else
        cout<<"black\n";
    return 0;
}
