#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> pos;

bool isSubsetSum(vector<long int> sst, int n, int sum,vector<int>&pos)
{
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   if (sst[n-1] > sum)
     return isSubsetSum(sst, n-1, sum,pos);

   if(isSubsetSum(sst, n-1, sum,pos))
        return true;

   if(isSubsetSum(sst, n-1, sum-sst[n-1],pos) )
    {
        pos.push_back(n-1);
        return true;
    }

    return false;
}

int main()
{
 int a[] = {3, 34, 4, 12, 5, 2};
  vector<long int> sst(a,a+sizeof(a)/sizeof(a[0]));
  int sum = 9;
  int n = sst.size();
  for(int j=0;j<2;j++){
  if (isSubsetSum(sst, n, sum,pos) == true){
        printf("Found a subset with given sum\n");
        int cnt=0;
        for(int i=0;i<pos.size();i++){
        cout<<pos[i]<<" ";
        sst.erase(sst.begin()+pos[i]-cnt);
        cnt++;
        }
     n=sst.size();
    pos.clear();
  }
  else {
     printf("No subset with given sum\n");
     break;
     }
}

  return 0;
}
