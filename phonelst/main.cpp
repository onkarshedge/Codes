#include <iostream>
#include<bits/stdc++.h>

using namespace std;
struct compare{
    bool operator()(const string &a,const string &b){
        return a.length()<b.length();
    }
};

class node{
public:
    bool is_word;
    node *chars[10];
    int prefixes;

    node(){
        is_word=false;
        memset(chars,0,sizeof(chars));
    }
};
class trie{
    node *root;
public:
    trie(){
        root=new node();
    }
    bool add(string s){
        node *p=root;
        int indx;
        for(int i=0;i<s.length();i++){
            indx=s[i]-'0';
            if(p->is_word)
                return true;
            if(!p->chars[indx]){
                p->chars[indx]=new node();
            }
            p=p->chars[indx];
        }
        p->is_word=true;
        return false;
    }
   /*bool searc(string s){
        node *loc=find_node(s);
        return loc?loc->is_word:false;
    }
    node* find_node(string s){
        node * p=root;
        int indx;
        for(int i=0;i<s.length();i++){
            indx=s[i]-'a';
            if(!p->chars[indx])
                return 0;
            p=p->chars[indx];
        }
        return p;
    }
*/
};

int main()
{
    int n,t,flg=0;
    string ph;
    compare c;
    cin>>t;
    while(t--){
        trie dict;
        flg=0;
        cin>>n;
        vector<string>contacts;
        for(int i=0;i<n;i++){
            cin>>ph;
            contacts.push_back(ph);
        }
        sort(contacts.begin(),contacts.end(),c);
        for(vector<string>::iterator it=contacts.begin();it!=contacts.end();it++){
                if(dict.add(*it)){
                    flg=1;
                    break;
                }
        }
        if(flg)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}
