#include <iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long int llt;
typedef vector<int> vi;

int main()
{
    int n,t;
    cin>>n;
    vi ones;
    vi twos;
    vi threes;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        if(t==1)
            ones.push_back(i);
        else if(t==2)
            twos.push_back(i);
        else
            threes.push_back(i);
    }
    int w=min(min(ones.size(),twos.size()),threes.size());
    cout<<w<<"\n";
    for(int i=0;i<w;i++){
        cout<<ones[i]<<" "<<twos[i]<<" "<<threes[i]<<"\n";
    }
    return 0;
}
