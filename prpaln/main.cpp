#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string s;
bool is_palin(string su){
    if(su == string(su.rbegin(),su.rend()))
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
      cin>>s;
      if(is_palin(s)){
        cout<<"YES\n";
      }
      else {
      unsigned int i,j;
      i=0;j=s.length()-1;
      while(i<j){
        if(s[i]==s[j]){
            i++;j--;
            }
        else
            break;
        }

        if(is_palin(s.substr(i+1,j-i)) || is_palin(s.substr(i,j-i)))
                cout<<"YES\n";
         else
            cout<<"NO\n";
        }


    }
    return 0;
}
