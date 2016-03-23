#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int remainder(string s){
    int temp=0;
    for(unsigned int i=0;i<s.length();i++){
        temp=(temp*10+s[i]-'0')%4;
    }
    temp=temp%4;
    return temp;
}
int main()
{
    string s;
    cin>>s;
    if(s.length()==1 && s[0]=='0')
        cout<<"4\n";
    else {
    int lastdigit=s[s.length()-1]-'0';
    int a_2[4]={6,2,4,8},b_3[4]={1,3,9,7},c_4[2]={6,4};
    int mod4 = remainder(s);
    int units_digit=1+a_2[mod4]+b_3[mod4]+c_4[lastdigit%2];
    cout<<units_digit%5<<"\n";
    }
    return 0;
}
