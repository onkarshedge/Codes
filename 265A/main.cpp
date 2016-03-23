#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define un unsigned int
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
   // reverse(s.begin(),s.end());
    int cnt=0;
    for(un i=0;i<n;i++){
        cnt++;
        if(s[i]=='0')
            break;

    }
    cout<<cnt<<"\n";
    return 0;
}
