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
    string s;
    cin>>s;
    int flg=0,f5=0;
    forall(i,0,n-1){
        if(s[i]!=s[i+1]){
            flg=1;break;
        }
    }
    if(!flg){
        cout<<string(n,'0');
    }
    else {
        char mi=':';int mnd;
        forall(i,0,n){
        if(s[i]>'5'){
            f5=1;
            }
            if(s[i]<mi){
                    mnd=i;
                    mi=s[i];
            }
        }
        if(f5){

            forall(i,0,n){
                s[i]='9'-s[i]+'0';
                if(s[i]<mi){
                    mnd=i;
                    mi=s[i];
                    }
                }
        }
        int j=mnd;
        forall(cnt,0,n){
                cout<<s[j];
                j=(j+1)%n;
            }


    }
    cout<<"\n";
    //cout<<s;
    return 0;
}
