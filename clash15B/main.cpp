#include <bits/stdc++.h>

using namespace std;
long long int mod=1e9+7;


long long int modular_pow(long long int base, long long int exponent)
{
    long long int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        exponent = exponent >> 1;
        base = (base * base) % mod;
    }
    return result%mod;
}

long long int primeFactors(int n)
{
    map<int,int> mp;
    long long int ans=1;
    while (n%2 == 0)
    {
        mp[2]++;
        n = n/2;
    }

    for (long long int i = 3; i <= sqrt(n); i = i+2)
    {

        while (n%i == 0)
        {
            mp[i]++;
            n = n/i;
        }
    }
    if (n > 2)
        mp[n]++;
    map<long long int,long long int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(glmp[it->first]<it->second){
            glmp[it->first]=it->second;
            }
    }
    return ans;
}

long long int readInt () {
	bool minus = false;
	long long int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int main()
{

    long long int t,n,m;
    t=readInt();
    while(t--){
        n=readInt();
        vector<long long int> ve;
        for(int j=0;j<n;j++){
            m=readInt();
            primeFactors(m);
        }
        long long int ans=lcm(ve);
        long long int sol=primeFactors(ans);

        cout<<sol<<"\n";
    }
    return 0;
}
