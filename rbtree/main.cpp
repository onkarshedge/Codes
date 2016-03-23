#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long int levelof(long long int n){
    long int an=log(n)/log(2)+1;
    return an;
}

long long int ancestor(long long int x, long long int y){
    deque<long long int> ls1,ls2;
    while(x>=1){
    ls1.push_front(x);
    x=x/2;
    }
    while(y>=1){
    ls2.push_front(y);
    y=y/2;
    }
    deque<long long int>::iterator it1,it2;
    it1=ls1.begin();it2=ls2.begin();
    while(it1 != ls1.end() && it2 != ls2.end()){
        if(*it1==*it2){
            it1++;it2++;
        }
        else break;
    }
   return *(--it1);

}
int main()
{
    int q;
    long long x,y,lca;
    bool odd_is_black=true;
    long int levelx,levely,lvl_ancestor;
    long int path_dist,red,black,temp,nodes;
    string op;
    cin>>q;
    while(q--)
        {
            cin>>op;
            if(op=="Qi"){
                odd_is_black=!odd_is_black;
    //            cout<<odd_is_black<<endl;
                continue;
            }
            cin>>x>>y;
            levelx=levelof(x);
            levely=levelof(y);
            lca=ancestor(x,y);
            lvl_ancestor=levelof(lca);
            path_dist=levelx+levely-2*lvl_ancestor;
            nodes=path_dist+1;
            if(nodes%2==0){
                cout<<nodes/2<<"\n";

            }
            else {
                    black=nodes/2+1;
                    red=nodes/2;
                    if(levelx%2==0) {
                        temp=black;
                        black=red;
                        red=temp;
                    }
                    if(op=="Qr") {
                        if(odd_is_black)
                            cout<<red<<"\n";
                        else
                            cout<<black<<"\n";
                    }
                    else if(op=="Qb") {
                        if(odd_is_black)
                            cout<<black<<"\n";
                        else
                            cout<<red<<"\n";


                    }

            }


        }
    return 0;
}
