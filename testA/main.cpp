#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define eps 1e-6

void foo(int *a){
int h=23;
a=&h;

}

int main()
{
   /* int a[]={-3,2,6,48,92};
    vector<int> v(a,a+5);
    sort(v.begin(),v.end());
    cout<<(*lower_bound(v.begin(),v.end(),8));*/
    int x=3;
    int *p;
    p=&x;
    cout<<p;
    foo(p);
    cout<<p;
    return 0;
}
