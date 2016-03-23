#include <iostream>
#include<vector>
using namespace std;

vector<int>v;
void fun(int**mat,int r,int c){

    if(r<0){
        for(int g=0;g<v.size();g++)
            cout<<v[g]<<" ";
        cout<<endl;
        return;
        }

    for(int i=0;i<c;i++){
        v.push_back(mat[r][i]);
        fun(mat,r-1,c);
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
    fun(mat,r-1,c);
    return 0;
}
