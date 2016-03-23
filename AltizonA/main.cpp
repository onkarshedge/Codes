#include <bits/stdc++.h>
using namespace std;
typedef map<string,int> mp;
typedef vector<string> vs;
int main()
{
    int t,n,q,m,var,amt;
    string name,payer,other;
    string OWE="X is owed Y";
    string neither="X owes Y";
    string OWES="X neither owes nor is owed";
    cin>>t;
    while(t--){
    vs persons;
    mp give,take;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>name;
        persons.push_back(name);
        give[name]=0;
        take[name]=0;
        }
    for(int i=0;i<q;i++){
        cin>>payer;
        cin>>amt;
        cin>>m;
        int each=amt/(m+1);
        for(int j=0;j<m;j++){
            cin>>other;
            take[payer]+=each;
            give[other]+=each;
            }
        }
    for(int i=0;i<n;i++){
        string aadmi=persons[i];
        int cash;
        if(give[aadmi]>take[aadmi]){
            cash=give[aadmi]-take[aadmi];
            cout<<aadmi<<" owes "<<cash;

            }
        else if(give[aadmi]<take[aadmi]){
            cash=take[aadmi]-give[aadmi];
            cout<<aadmi<<" is owed "<<cash;
            }
        else{
                cout<<aadmi<<" neither owes nor is owed";
            }
            cout<<"\n";
        }
    }

    return 0;
}
