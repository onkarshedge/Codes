#include <bits/stdc++.h>

using namespace std;

typedef vector<int> v;
typedef map<int,string>mp;

const int max_int=1000001;
int ar[max_int];

int prime_length(int n){
    int cnt=0;
    while(n%2==0){
        cnt++;
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i=i+2){
        while(n%i==0){
            n/=i;
            cnt++;
        }
    }
    if(n>2)cnt++;
    return cnt;

}

void init(){
    ar[0]=0;ar[1]=0;
    for(int i=2;i<max_int;i++){
        ar[i]=ar[i-1]+prime_length(i);
    }

}

int main()
{
    int n,m;
    init();
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];

    long final_ans=0;
    for(int i=0;i<(1<<n);i++){
        if(i==0) continue;
        long sum=0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                sum+=ar[nums[j]];
            }
        }
        cout<<sum<<endl;
        if(sum%2==0) final_ans+=sum;
    }
    cout<<final_ans<<endl;
    return 0;
}
