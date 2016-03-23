#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ul unsigned long int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

char neg(char x){
    return x=='-'?'+':'-';
}
int diff(string s,string on)
{
    int cnt=0;
    for(ul j=0;j<s.length();j++)
        {
            if(s[j]!=on[j])
                cnt++;
        }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    ul n=s.length();
    if(n==1){
        cout<<"0\n";
        continue;
    }
    string aone,btwo;
    aone.resize(n);btwo.resize(n);
    char x='-';
    for(ul i=0;i<n;i++){
        aone[i]=x;
        x=neg(x);
        btwo[i]=x;
    }
    int ans=min(diff(s,btwo),diff(s,aone));
    cout<<ans<<"\n";
    }
    return 0;
}
