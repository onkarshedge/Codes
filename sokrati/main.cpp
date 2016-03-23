#include <iostream>
#include<vector>
using namespace std;

vector<int>v;
void fun(int**mat,int r,int c){

    if(c<0){
        for(int g=0;g<v.size();g++)
            cout<<v[g]<<" ";
        cout<<endl;
        return;
        }

    for(int i=0;i<r;i++){
        v.push_back(mat[i][c]);
        fun(mat,r,c-1);
        v.pop_back();
    }

}

int main()
{
    int r,c;
    cin>>r>>c;
    int** mat;
    mat=new int*[r];
     for(int i=0;i<r;i++)
        mat[i]=new int[c];
     for(int i=0;i<r;i++)
        for(int k=0;k<c;k++)
            cin>>mat[i][k];
    fun(mat,r,c-1);
    return 0;
}
