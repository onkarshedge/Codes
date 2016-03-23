#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int total=1,level=1,i=2,nl=3;
    while(total+nl<=n){
        level++;
        total+=nl;
        nl=nl+(++i);

    }
    cout<<level<<"\n";
    return 0;
}
