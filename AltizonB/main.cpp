#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
     int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    int cnt=0;
    for(int i=0;i<n-k+1;i++){
        for(int j=0;j<n-k+1;j++){
            long sum=0;
            int p=i+k,q=j+k;
            for(int x=i;x<p;x++){
                for(int y=j;y<q;y++){
                    sum+=arr[x][y];
                }
            }
           // cout<<sum<<"\n";
            int n=round(pow(sum,1.0/3));
            if((n*n*n)==sum || ((n+1)*(n+1)*(n+1))==sum)
                cnt++;

        }

    }
    cout<<cnt<<"\n";
    return 0;
}
