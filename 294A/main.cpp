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
map<char,int>chess;
chess['q']=9;chess['r']=5;chess['b']=3;chess['n']=3;chess['p']=1;
char c;int whites=0,blacks=0;
forall(i,0,8){
forall(i,0,8){
    cin>>c;
    if(c=='.' || c=='k' || c=='K')
        continue;
    else if('A'<=c && c<='Z'){
        char c_=tolower(c);
        whites+=chess[c_];
        }
    else
        blacks+=chess[c];

}

}
if(blacks>whites)
    cout<<"Black\n";
else if(blacks<whites)
    cout<<"White\n";
else
    cout<<"Draw\n";
    return 0;
}
