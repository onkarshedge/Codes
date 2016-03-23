#include <iostream>

using namespace std;

int b[20];

void quicksort(int a[],int left,int right){
    if(left<right){

    int p=a[left];
    int i=left;int j=right;
    while(i<j){
        while(a[i]<=p && i<j)
            i++;
        while(a[j]>p && j>=i)
            j--;
        if(i<=j)
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    int temp=a[j];
    a[j]=a[left];
    a[left]=temp;
    quicksort(a,left,j-1);
    quicksort(a,j+1,right);
    }

}

int main()
{
    int a[20],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    quicksort(a,0,n-1);
    for(int k=0;k<n;k++)
        cout<<a[k]<<" ";
    cout<<endl;
}
