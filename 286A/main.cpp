#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

bool ispal(string s){
    if(string(s.rbegin(),s.rend())==s)
        return true;
    return false;
}
int main()
{
    string s;
    cin>>s;
     if(ispal(s))
        {
            int p=s.length()/2;
            s.insert(p,1,s[p]);
            cout<<s;
        }
    else {
    int i=0;int j=s.length()-1;
    for(;i<j;i++,j--){
            string cp1=s;
            string cp2=s;
            if(s[i]==s[j])
                continue;
            int p=s.length()/2;
            if(ispal(cp1.insert(i,1,s[j]))){
                cout<<cp1<<endl;
                break;
            }
            else if(ispal(cp2.insert(j+1,1,s[i]))){
                cout<<cp2<<endl;
                break;
            }
            else{
                cout<<"NA\n";
                break;
                }
        }
    }
    return 0;
}
