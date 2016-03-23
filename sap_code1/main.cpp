#include <iostream>
#include<string.h>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;

int n;

int fun(int k,vector<int> p){
   if(k==n){
        for(auto i:p)
            cout<<i<<" ";
        cout<<endl;
        return 1;
        }
    p.push_back(0);
    fun(k+1,p);
    p.pop_back();
    if(k>0 && p[k-1]!=1)
    {
        p.push_back(1);
        fun(k+1,p);
        p.pop_back();
    }
    else if(k==0){
        p.push_back(1);
        fun(k+1,p);
        p.pop_back();

    }

}

int main()
{
    n=3;
    vector<int>vv;
    fun(0,vv);
    return 0;
}
