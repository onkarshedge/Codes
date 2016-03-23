#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ul unsigned long int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef map<int,int> MP;

int main()
{
    int t,n,d;
    cin>>t;
    while(t--){
    cin>>n;
    MP frq;
    int mx=0;
    forall(i,0,n){
        cin>>d;
        ++frq[d];
        if(frq[d]>mx)
            mx=frq[d];
        }
      cout<<n-mx<<endl;

    }
    return 0;
}
