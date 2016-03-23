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
    double d,a;
    int n;
    cin>>a>>d>>n;
    //double o,t,th,f;
    for(double i=1;i<=n;i++){
        double va=fmod(i*d,a);
        int ch=fmod((i*d)/a,4.0);

        if(ch==0)
            printf("%.12f %s\n",va,"0.000000");
        else if(ch==1)
             printf("%.12f %.12f\n",a,va);
        else if(ch==2)
             printf("%.12f %.12f\n",a-va,a);
        else if(ch==3)
             printf("%s %.12f\n","0.0000",a-va);
    }
    return 0;
}
