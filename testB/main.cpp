#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string s;
long long int tonum(int st,int e,int c,bool val){
    string tmp=s.substr(st,e);
    if(!val)
        tmp[c]='9';
 //   cout<<"\ntmp "<<tmp<<" "<<val<<"\n";
    long long int num=tmp[0]-'0';
    for(int i=1;i<tmp.size();i++)
        num=num*10+tmp[i]-'0';
    return num;
}
int main()
{
    long long int ans,mans=-1;
    cin>>s;
    int sz,msz=-1;
    for(int i=0;i<s.length();i++){
        int j=i;
       bool char_pass=true;int cpos;
       while(j<s.length() && (isdigit(s[j]) || (isalpha(s[j]) && char_pass ) ) ) {
            if(isalpha(s[j])){
                char_pass=false;
                cpos=j;
                }
                 j++;
            }
      //      cout<<"j : "<<j<<"\n";
            sz=j-i;
            if(sz>=msz){
                msz=sz;
                ans=tonum(i,sz,cpos-i,char_pass);
           //     cout<<ans<<endl;
               if(ans > mans)
                mans=ans;
               }
    }
    cout<<mans<<"\n";
    return 0;
}
