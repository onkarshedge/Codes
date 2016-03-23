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
typedef map<int,int>mp;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    bool fl = true;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(fl && i==2 && arr[i]-arr[i-1] == k)
            fl =false;
    }

    vector <pair <pair <int ,int>,char > > ans;
    int count =0,tmp;
    char sn;
    if(!fl && n>2) {
    if(abs(arr[1] - arr[0])==k)
        goto l;
     sn = (arr[0]+k)>(arr[1])?'-':'+';
        ans.push_back(make_pair(make_pair(1,abs(arr[0]+k-arr[1])),sn));
        }
    l:
    for(int i=1;i<n-1;i++)
    {
       if(arr[i]+k == arr[i+1])
        continue;

        count++;
        sn = (arr[i]+k)<(arr[i+1])?'-':'+';
        ans.push_back(make_pair(make_pair(i+2,abs(arr[i]+k-arr[i+1])),sn));

            arr[i+1] = arr[i]+k;



        }
    cout<<count<<endl;
    for( vector <pair <pair <int , int > , char > >::iterator it=ans.begin();it!=ans.end();it++)
    {
        cout<<it->second<<" "<<(it->first).first<<" "<<(it->first).second;
        cout<<endl;


    }
    return 0;
}
