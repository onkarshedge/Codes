#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

int n,m;
bool valid ( int i , int j){
        return ( i >= 0 && i < n && j >= 0 && j < m );
    }
int dr[] = { 1,0} ;
int dc[] = { 0 ,1} ;

int main()
{

    cin>>n>>m;
    VI visited(n*m);
    VI onstack(n*m);
    map<PII,int> cords;
    cords.clear();
    char mp[n][m];
    int cn=0;
    forall(i,0,n){
        forall(j,0,m){
            cin>>mp[i][j];
            cords[make_pair(i,j)]=cn;
            visited[cn]=0;
            onstack[cn]=0;
        }
    }


    return 0;
}
