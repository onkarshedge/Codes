#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string chords[12]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
    string a,b,c;
    cin>>a>>b>>c;
    int x=0,y=0,z=0;
    for(int i=0;i<12;i++){
        if(chords[i]==a)
            x=i;
        else if(chords[i]==b)
            y=i;
         else if(chords[i]==c)
            z=i;

    }
   int disxy=y-x>=0?y-x:12+y-x,disyx=12-disxy;
   int disyz=z-y>=0?z-y:12+z-y,diszy=12-disyz;
   int disxz=z-x>=0?z-x:12+z-x,diszx=12-disxz;
   cout<<disyz<<diszy<<endl;
   if(disxy==7){
        if(disxz==4 && diszy==3)
            cout<<"major\n";
        else if(disxz==3 && diszy==4)
            cout<<"minor\n";
   }
    else if(disyx==7){
        if(disyz==4 && diszx==3)
            cout<<"major\n";
        else if(disyz==3 && diszx==4)
            cout<<"minor\n";
   }
    else  if(disyz==7){
        if(disyx==4 && disxz==3)
            cout<<"major\n";
        else if(disyx==3 && disxz==4)
            cout<<"minor\n";
   }
   else  if(diszy==7){
        if(diszx==4 && disyz==3)
            cout<<"major\n";
        else if(diszx==3 && disyz==4)
            cout<<"minor\n";
   }
   else  if(disxz==7){
        if(disxy==4 && disyz==3)
            cout<<"major\n";
        else if(disxy==3 && disyz==4)
            cout<<"minor\n";
   }
    else  if(diszx==7){
        if(diszy==4 && disyx==3)
            cout<<"major\n";
        else if(diszy==3 && disyx==4)
            cout<<"minor\n";
   }
   else {
    cout<<"strange\n";
   }

    return 0;
}
