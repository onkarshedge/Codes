#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void init(int tree[],int a[],int l,int r,int v){
    if(l==r)
        tree[v]=a[l];
    else {
    int mid=(l+r)/2;
    init(tree,a,l,mid,2*v);
    init(tree,a,mid+1,r,2*v+1);
    tree[v]=tree[2*v]+tree[2*v+1];
    }

}

long int getsum(int tree[],int a[],int st,int se,int l,int r,int v){
    if(l>se || r <st)
        return 0;
    if(l<=st && r>=se)
        return tree[v];
    int mid=(st+se)/2;
    return getsum(tree,a,st,mid,l,r,2*v) + getsum(tree,a,mid+1,se,l,r,2*v+1);
}

void update(int tree[],int a[],int l,int r,int pos,int val,int v){
        if(l==r)
            tree[v]=val;
        else {
        int mid=(l+r)/2;
        if(pos <= mid)
            update(tree,a,l,mid,pos,val,2*v);
        else
            update(tree,a,mid+1,r,pos,val,2*v+1);
        tree[v]=tree[2*v]+tree[2*v+1];
        }

}

int main()
{
    int t,n;
    long long int maxn;
    cin>>n;
    int a[n];
    maxn=4*n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int tree[maxn];
    memset(tree,0,sizeof(tree));
    cin>>t;
    int l,r;
    init(tree,a,0,n-1,1);
    for(int i=0;i<maxn;i++)
        cout<<i<<" "<<tree[i]<<"\n";
    while(t--){
        cin>>l>>r;
        update(tree,a,0,n-1,l,r,1);
        for(int i=0;i<maxn;i++)
            cout<<i<<" "<<tree[i]<<"\n";
        cout<<"**************................************\n";
    }
    return 0;
}
