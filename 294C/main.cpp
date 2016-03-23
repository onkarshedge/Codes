#include <bits/stdc++.h>

using namespace std;
#define forall(i,a,b)   for(int i=a;i<b;i++)
int cnt=0;
int get_max_teams(int n,int m){
    if(n<=0 || m<=0)
        return 0;
    if(n==1 && m>1)
        return 1;
    if(n>1 && m==1)
        return 1;
     return 1+max(get_max_teams(n-1,m-2),get_max_teams(n-2,m-1));

}
int main()
{
    int num,mum,ans1;
    cin>>num>>mum;
    ans1=get_max_teams(num,mum);
    cout<<ans1;
}
