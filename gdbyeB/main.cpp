#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define forall(i,a,b)   for(int i=a;i<b;i++)


int main()
{
    int n;
    cin>>n;
    int a[n];
    string mat[n];
    vector<pair<int,int> >vp;
    int reach[n][n];
    forall(i,0,n){
        cin>>a[i];
        vp.push_back(make_pair(a[i],i));
    }
    forall(i,0,n){
       cin>>mat[i];
    }
    forall(i,0,n){
       forall(j,0,n){
        reach[i][j]=mat[i][j]-'0';
       }
    }
    forall(k,0,n){
        forall(i,0,n){
            forall(j,0,n){
                    reach[i][j]=reach[i][j] ||( reach[i][k] && reach[k][j]);
                }
            }
        }


  sort(vp.begin(),vp.end());
    forall(i,0,n){
        int pos=vp[i].second;
        forall(j,0,n){
                if(reach[pos][j]==1){
                    vp[i].second=j;
                    forall(k,0,n)
                        reach[k][j]=0;
                    break;
                }
        }
    }
    /*forall(i,0,n){
       forall(j,0,n){
        cout<<reach[i][j];
       }
       cout<<endl;
    }
   cout<<endl;
    forall(i,0,n){
       cout<<vp[i].first<<" "<<vp[i].second;
       cout<<endl;
    }
*/
    forall(i,0,n){
        forall(j,0,n){
            if(vp[j].second==i){
                cout<<vp[j].first<<" ";
                break;
            }
        }
    }
    cout<<endl;
    /*forall(i,0,n){
       forall(j,0,n){
        cout<<reach[i][j];
       }
       cout<<endl;
    }
    */
    return 0;
}
