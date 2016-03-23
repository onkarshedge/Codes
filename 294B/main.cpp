#include <bits/stdc++.h>

using namespace std;
#define forall(i,a,b)   for(int i=a;i<b;i++)
typedef vector<int>v;
int main()
{
    int n;
    cin>>n;
    int  first[n] ,second[n-1] ,third[n-2];
    int te;
    forall(i,0,n){
        cin>>first[i];
        }
         forall(i,0,n-1){
        cin>>second[i];

        }
     forall(i,0,n-2){
        cin>>third[i];

        }
        v dif1(n),dif2(n);
        v::iterator it1,it2;
        sort (first,first+n);
        sort (second,second+n-1);
        sort (third,third+n-2);

  it1=std::set_difference (first, first+n, second, second+n-1, dif1.begin());
   it2=std::set_difference (second, second+n-1,third,third+n-2, dif2.begin());
  dif1.resize(it1-dif1.begin());
  dif2.resize(it2-dif2.begin());
  cout<<dif1[0]<<endl;
  cout<<dif2[0]<<endl;


    return 0;
}
