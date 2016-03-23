#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s.find("101")!=string::npos){
            cout<<"Good\n";
        }
        else if(s.find("010")!=string::npos){
            cout<<"Good\n";
        }
        else {
            cout<<"Bad\n";
        }
    }
    return 0;
}
