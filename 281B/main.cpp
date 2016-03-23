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
    int n;
    cin>>n;
    string ply1,ply2;
    ll sum1=0,sum2=0,ab;
    int last_mv;
    forall(i,0,n){
        cin>>ab;
        stringstream ss;
        ss << abs(ab);
        if(ab<0){
            sum2+=abs(ab);
            ply2.append(ss.str());
            last_mv=2;
            }
        else{
            sum1+=ab;
             ply1.append(ss.str());
             last_mv=1;
            }
    }
    if(sum1>sum2)
        cout<<"first\n";
    else if(sum1<sum2)
        cout<<"second\n";
    else if(sum1==sum2){
        if(ply1>ply2)
            cout<<"first\n";
        else if(ply1<ply2)
            cout<<"second\n";
        else{
            if(last_mv==1)
                 cout<<"first\n";
            else if(last_mv==2)
                cout<<"second\n";
        }
    }
    return 0;
}
