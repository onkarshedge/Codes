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
    int a[10]={2,7,2,3,3,4,2,5,1,2};
    int n,x,b;
    cin>>n;
    b=n%10;
    n=n/10;
    x=n%10;
  //  cout<<x<<b<<endl;
    cout<<a[x]*a[b]<<endl;
    return 0;
}
