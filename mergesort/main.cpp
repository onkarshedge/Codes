#include <iostream>

using namespace std;
void mergesort(int *,int,int,int);
int b[20];

void mergel(int a[],int left,int right){
    if(left<right){
    int mid=(left+right)/2;
    mergel(a,left,mid);
    mergel(a,mid+1,right);
    mergesort(a,left,mid,right);
    }
}
void mergesort(int arr[],int l,int m,int r){
    int i=l;
    int h=l,j=m+1;
    while(h<=m && j<=r){
        if(arr[h]< arr[j])
            b[i]=arr[h++];
        else
            b[i]=arr[j++];
        i++;
    }
    if(h>m){
        for(int k=j;k<=r;k++)
            b[i++]=arr[k];
    }
    else if(j>r){
            for(int k=h;k<=m;k++)
                b[i++]=arr[k];
    }
    for(int k=l;k<=r;k++)
                arr[k]=b[k];
}
int main()
{
    int a[20],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergel(a,0,n-1);
    for(int k=0;k<n;k++)
        cout<<a[k]<<" ";
    cout<<endl;
}
