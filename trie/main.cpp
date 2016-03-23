#include <iostream>
#include<bits/stdc++.h>

using namespace std;
class node{
public:
    bool is_word;
    node *chars[26];
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
    void add(string s){
        node *p=root;
        int indx;
        for(int i=0;i<s.length();i++){
            indx=s[i]-'a';
            if(!p->chars[indx]){
                p->chars[indx]=new node();
            }
            p=p->chars[indx];
        }
        p->is_word=true;
    }
    bool searc(string s){
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

};

int main()
{
    trie dict;
    dict.add("their");dict.add("there");dict.add("answer");dict.add("the");dict.add("any");dict.add("bye");
    cout<<dict.searc("their");
    return 0;
}
