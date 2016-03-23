#include <bits/stdc++.h>

using namespace std;

int arr[100005];

void solve(){
   int t1=2,t2=3,temp;
    arr[0]=arr[1]=arr[2]=0;
    for(int i=3;i<=100004;i++){
        if(t2%4==3)
            arr[i]=arr[i-1]+1;
        else
            arr[i]=arr[i-1];
        temp=t2%4;
        t2=(t1%4+t2%4)%4;
        t1=temp;
    }
    //for(int k=0;k<20;k++)
    //    cout<<arr[k]<<" ";

}
long long int modular_pow(long long int base, long long int exponent,int mod)
{
    long long int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        exponent = exponent >> 1;
        base = (base * base) % mod;
    }
    return result%mod;
}

int main()
{
    solve();
    int q,l,r,left;cin>>q;
    while(q--){
        cin>>l>>r;
        l--;r--;
        if(l==0)
            left=0;
        else
            left=arr[l-1];
        int cnt=arr[r]-left;
        if(cnt==0)
            cout<<"1\n";
        else {
            int res=modular_pow(3,cnt,4);
            cout<<res<<"\n";
        }

    }
    return 0;
}
