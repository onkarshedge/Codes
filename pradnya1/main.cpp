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

int readInt () {
	bool minus = false;
	int result = 0;
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
    int o=readInt();
    char r,l;
    int onstrike=0;
    int playing[2]={1,2};
    int on_field_scores[2]={0,0};
    int wcks=0;
    VII scores;
    int cnt=1;
    while(scanf("%c ",&r)!=EOF){
         l=r;
        if(r=='W' && wcks<10){
            scores.push_back(make_pair(playing[onstrike],on_field_scores[onstrike]));
            wcks++;
            playing[onstrike]=wcks+2;
        }
        else if((r-'0')%2==0){
            on_field_scores[onstrike]+=r-'0';
        }
        else if((r-'0')%2==1){
            on_field_scores[onstrike]+=r-'0';
            onstrike=onstrike==0?1:0;
        }
        cnt++;
        if(cnt%6==0){
            onstrike=onstrike==0?1:0;
            cnt=1;
        }
    }
    if(l!='W'){
        scores.push_back(make_pair(playing[0],on_field_scores[0]));
        scores.push_back(make_pair(playing[1],on_field_scores[1]));
    }
    sort(scores.begin(),scores.end());
    for(int i=0;i<scores.size();i++){
        cout<<"Player "<<i+1<<" "<<scores[i].second<<"\n";
    }
    return 0;
}
