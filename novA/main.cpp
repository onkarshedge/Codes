#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define uin unsigned int

int balance(string s){
   int max_bal=0;
    int bal=0;
    for(uin i=0;i<s.length();i++){
        if(s[i]=='(') bal++;
        else bal--;
        max_bal=max(max_bal,bal);
    }
return max_bal;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    string in;
    cin>>in;
    int b=balance(in);
    for(uint j=0;j<b;j++)
        cout<<"(";
    for(uint j=0;j<b;j++)
        cout<<")";
    cout<<"\n";
    }
    return 0;
}
