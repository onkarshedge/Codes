#include <bits/stdc++.h>

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
    string s,t,c;
    cin>>s>>t;
    int flag=0;
    for(int i=s.size()-1;i>=0;i--){
        char x=s[i];
        if(x=='z')
            continue;
        for(s[i]++; x<='z';x++){
            if(s<t){
                flag=1;break;
                }
        }
    if(flag)
        break;
    }
    if(flag)
        cout<<s<<endl;
    else
        cout<<"No such string\n";
    return 0;
}
