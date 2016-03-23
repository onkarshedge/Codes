#include <iostream>
#include<string>
using namespace std;

int main()
{
    int a[5];
    for(int i=1;i<=4;i++)
        cin>>a[i];
    long int sum=0;
    string s;
    cin>>s;
    for(unsigned int j=0;j<s.length();j++)
        sum+=a[s[j]-'0'];
    cout<<sum<<endl;
    return 0;
}
