#include <bits/stdc++.h>

using namespace std;
#define forall(i,a,b)   for(unsigned int i=a;i<b;i++)
int main()
{
    string s,t;
    cin>>s>>t;
    int arrl[26],arru[26];
    int done[s.size()];
    memset(arrl,0,sizeof(arrl));
    memset(arru,0,sizeof(arru));
    memset(done,0,sizeof(done));
    forall(i,0,t.size()){
        if('a'<=t[i] && t[i]<='z')
            arrl[t[i]-'a']++;
        else
            arru[t[i]-'A']++;
    }

    int yay=0,whps=0;
    forall(i,0,s.size()){
        if('a'<=s[i] && s[i]<='z'){
            if(arrl[s[i]-'a']>0)
            {
                arrl[s[i]-'a']--;
                yay++;
                done[i]=1;
            }

        }
        else {
            if(arru[s[i]-'A']>0)
            {
                arru[s[i]-'A']--;
                yay++;
                done[i]=1;
            }

        }
    }
    forall(i,0,s.size()){
        if(!done[i]){
            if(s[i]>='a' && s[i]<='z'){
                if(arru[s[i]-'a']>0)
                    whps++;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                    if(arrl[s[i]-'A']>0)
                    whps++;
            }
        }
    }
    cout<<yay<<" "<<whps<<endl;
    return 0;
}
