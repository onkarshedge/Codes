#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
int main()
{
    int n,m;
    cin>>n>>m;
    char sn[n][m];
    forall(i,0,n){
        forall(j,0,m)
        sn[i][j]='.';
    }
    bool dir=true;
    forall(i,0,n){
        forall(j,0,m){
            if(i%2==0){
            sn[i][j]='#';
            }
            else {
                if(dir)
                    sn[i][m-1]='#';
                else
                    sn[i][0]='#';
                dir=!dir;
                break;
            }
        }

    }
     forall(i,0,n){
        forall(j,0,m)
        cout<<sn[i][j];
        cout<<endl;
    }
    return 0;
}
