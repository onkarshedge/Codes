#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define forall(i,a,b)   for(int i=a;i<b;i++)

int main()
{
    int N,v[1000],freq[1000];cin>>N;
    forall(l,0,N)
        cin>>v[l];
        int i=0;
	      int j=i+1;
	      int cnt=0;

	     while(i<N) {
	      while(j<N && (v[i]==v[j])) j++;
		freq[cnt]=j-i;
		cnt++;
	      i=j;
	     }
	     forall(k,0,5)
            cout<<freq[k]<<" ";
       // cout<<freq[i];
    return 0;
}
