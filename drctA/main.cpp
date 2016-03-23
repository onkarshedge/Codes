#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, char> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

int main()
{
    int n,k,p,t;
    cin>>t;
    while(t--){
    cin>>n>>k>>p;
    int a[n],b[n];
    VII jmps(n);
    forall(i,0,n)
        cin>>a[i];
    forall(i,0,n)
        cin>>b[i];
    jmps[0].first=min(a[0],b[0]);
    char cur=a[0]<b[0]?'a':'b';
    jmps[0].second=cur;
    forall(i,1,n){
        char cr;int va;
       int mi=1e7;
        for(int j=i-1;j>=0 && j+k>=i;j--){
           if(jmps[j].second=='a'){
                if(jmps[j].first+p+b[i]<jmps[j].first+a[i]){
                    if(jmps[j].first+p+b[i]<mi){
                        cr='b';
                        va=jmps[j].first+p+b[i];
                        mi=va;
                    }
                    }
                else{
                        if(jmps[j].first+a[i]<mi){
                            cr='a';
                            va=jmps[j].first+a[i];
                            mi=va;
                            }
                    }
                }
          else if(jmps[j].second=='b'){
                if(jmps[j].first+p+a[i]<jmps[j].first+b[i]){
                    if(jmps[j].first+p+a[i]<mi){
                        cr='a';
                        va=jmps[j].first+p+a[i];
                        mi=va;
                    }
                    }
                else{
                        if(jmps[j].first+b[i]<mi){
                            cr='b';
                            va=jmps[j].first+b[i];
                            mi=va;
                            }
                    }
                }
           }

//cout<<mi<<" "<<cr<<endl;
        jmps[i].first=mi;
        jmps[i].second=cr;
    }
    cout<<jmps[n-1].first<<endl;
    }
    return 0;
}
