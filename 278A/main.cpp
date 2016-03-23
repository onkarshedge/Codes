#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n,nc;
    cin>>n;
    nc=n;
    int flg=0,fl8=0;
    if(n>=0)  {
        int a=n%10;
     if(a==9) {
            while(a==9) {
                a=n%10;
                n=n/10;
                if(a==7){
                    flg=1;
                    break;
                }
            }
            if(flg)
                cout<<1<<"\n";
            else
                cout<<9<<"\n";
        }
    else if(a!=8) {
        int mx;
        while(nc>0){
            mx=nc%100;
            nc=nc/100;
            if(nc==8) {
                cout<<1<<"\n";break;
                }
        }
    }
        else
            cout<<"10\n";
    }
    else {

        if(-1>=n && n>=-8)
            cout<<8-n<<"\n";
        else {
        n=abs(n);
        int b=n%10;
        if(b<=8) {
            b=8-b;
            b=10-b;
            cout<<b<<"\n";
        }
        else
            cout<<"1\n";
        }

    }
    return 0;
}
