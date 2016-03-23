#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>n>>m;
    if(n==1)
        cout<<"1\n";
    else if(n&1){
    if(m>=(n-1)/2+1)
            cout<<m-1<<"\n";
    else
        cout<<m+1<<"\n";
    }
    else{
         if(m>(n-1)/2+1)
            cout<<m-1<<"\n";
        else
        cout<<m+1<<"\n";


    }

    return 0;
}
