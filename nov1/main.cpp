#include <iostream>
#include<cmath>
using namespace std;

long long int mod =1000000007;
int main()
{
	//cout<<mod;
	int t;
	cin>>t;
	while(t--){
		long long int n,min,max,cp,val,h,j;double sq,sq1,sq2;
		cin>>n;
		cp=n-1;
		max=((((cp%mod)*(cp+1))%mod)*(2*cp+1))%mod;
		max=max/6;
		if(n%2){
			val=cp/2;
			sq=fmod(pow(val,2),mod);
			min=fmod(n*sq,mod);
		}
		else{
			h=cp/2;
			j=(cp+1)/2;
			sq1=fmod(pow(h,2),mod);
			sq2=fmod(pow(j,2),mod);
			sq1=fmod(sq1*(n/2),mod);
			sq2=fmod(sq2*(n/2),mod);
			min=sq1+sq2;
		}
		cout<<min<<" "<<max<<endl;
	}

    return 0;
}
