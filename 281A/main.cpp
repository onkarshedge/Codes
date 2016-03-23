#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define forall(i,a,b)   for(int i=a;i<b;i++)

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

string hom,awa;
class fouls{
public:
        string tm_name;
        int time;
        int number;
        bool ylw;
        bool red;
        fouls(char tm,int jersey,bool y=false,bool r=false){
        tm_name=(tm=='h')?hom:awa;
        number=jersey;
            ylw=y;
            red=r;
        }
        bool solve(int tme,char cd){
            if(this->red)
                return false;
            if(cd=='r'){
            red=true;
            time =tme;
            }

        else {
        if(cd=='y'){
            red =true;
            time =tme;
            }

            }
            return red;

        }
    };
int main()
{


    cin>>hom>>awa;
    int n;
    cin>>n;
    int tim,jer;char card,tm;
    vector<fouls> vv;
    vector<fouls>::iterator it;
    string nm;
    forall(i,0,n){
        cin>>tim>>tm>>jer>>card;
        bool flg=false;
        nm=(tm=='h')?hom:awa;

        for(it=vv.begin();it!=vv.end();it++){
            if((*it).tm_name==nm && jer==(*it).number){
              //  cout<<"hahahha\n";
                    if((*it).solve(tim,card)){
                        cout<<(*it).tm_name<<" "<<(*it).number<<" ";
                        cout<<(*it).time<<"\n";
                    }
                flg=true;
                break;
            }
        }
        if(!flg && card=='r'){
             fouls obj(tm,jer,true,true);
             vv.push_back(obj);
             cout<<nm<<" "<<jer<<" "<<tim<<endl;
        }

        if(!flg && card=='y'){
            fouls obj(tm,jer,true,false);;
            vv.push_back(obj);
            }


    }
    return 0;
}
