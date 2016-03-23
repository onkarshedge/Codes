#include <iostream>
#include<cmath>
using namespace std;


long long int a[10];


int sumofnumbers(long long int n){
   if(n<10)
        return(n*(n+1))/2;

    int d=log10(n);
    p=ceil(power(10,d));
    int msd=n/p;
    cout<<d;

return 0;

}

int main() {
    a[0]=0LL;a[1]=45LL;
    int m;
    for(int i=2;i<10;i++)
        a[i]=a[i-1]*10+45*ceil(pow(10,i-1));
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cin>>m;
   sumofnumbers(m);

	return 0;
}
