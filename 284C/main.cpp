#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define EPS 1e-10

double x1,x2,y2,y_1,dist;

bool lies_in_range(double x,double y)
{
   double dist1= sqrt((y-y_1)*(y-y_1)+(x-x1)*(x-x1));
   double dist2=sqrt((y-y2)*(y-y2)+(x-x2)*(x-x2));
  // cout<<dist<<" "<<dist1+dist2<<endl;
   if(fabs(dist1+dist2-dist)<=EPS){
       // cout<<"hello\n";
        return 1;
    }
    return 0;
}


int main()
{
    double a1,b1,c1,pt_x,pt_y;
    double a2,b2,c2;

    int n,cnt=0;
    cin>>x1>>y_1;
    cin>>x2>>y2;
    double det;
    a2=-(y2-y_1);b2=x2-x1;c2=y_1*(x2-x1)-x1*(y2-y_1);
    dist=sqrt((y2-y_1)*(y2-y_1)+(x2-x1)*(x2-x1));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1>>b1>>c1;
        det = a1*b2 - a2*b1;
        if(det == 0){
            continue;
        }else{
        pt_x = (b2*c1 - b1*c2)/det;
        pt_y = (a1*c2 - a2*c1)/det;
     //   cout<<pt_x<<" "<<pt_y<<endl;
        if(lies_in_range(pt_x,pt_y)){
            cnt++;
        }
    }
    }
    cout<<cnt<<endl;
    return 0;
}
