#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define EPS 1e-12

int main()
{
    double a1,b1,c1,x1,x2,y2,y_1;
    int n,cnt=0;
    cin>>x1>>y_1;
    cin>>x2>>y2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1>>b1>>c1;
        if(((a1*x1+b1*y_1+c1)>0 && (a1*x2+b1*y2+c1)<0 )||( (a1*x1+b1*y_1+c1)<0 && (a1*x2+b1*y2+c1)>0)){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
