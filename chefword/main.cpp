#include <iostream>
#include<bits/stdc++.h>
using namespace std;

typedef vector<vector<double> > vvd;
typedef set<string> sts;
vvd matrix_multiplication(vvd m,vvd n) {
    vvd c(26,vector<double>(26,0) );
    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++)
            for(int k=0;k<26;k++)
                c[i][j]+=m[i][k]*n[k][j];

    return c;
}

vvd fast_exponential(vvd a,long int n) {
    if (n==1)
        return a;
    if(n%2==0)
        return fast_exponential(matrix_multiplication(a,a),n/2);
    else
        return matrix_multiplication(a,fast_exponential(matrix_multiplication(a,a),(n-1)/2));

}
int main()
{
    int t;
    long int n,k;
    string s,q;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>s;
        sts chs;
        vvd alph(26,vector<double>(26,0) );
        for(int i=0;i<26;i++)
            for(int j=0;j<26;j++)
                cin>>alph[i][j];

        for(int i=0;i<n;i++){
            cin>>q;
            chs.insert(q);
            }

    // solution starts here
        vvd ans=fast_exponential(alph,k);
        double prob=1,final_ans=0.0000000000000;
        for(sts::iterator x=chs.begin();x!=chs.end();x++){
            if(s.length()!=(*x).length())
                continue;
            prob=1;
            for(unsigned int i=0;i<s.length();i++) {
                int l=s[i]- 'a',p=(*x)[i] - 'a';
                prob=prob*ans[l][p];
            }
            final_ans+=prob;
        }
  //      cout<<fixed<<final_ans<<"\n";
        cout<<fixed<<setprecision(12)<<final_ans<<"\n";

 /*       for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout<<ans[i][j]<<"\t";
            cout<<endl;
        }
*/
    }

    return 0;
}
