#include<iostream>
#include<conio.h>
using namespace std;

int hammingDistance(int x, int y) 
{
    int ans=0;
    int xInput,yInput;

    while(x>0 || y > 0)
    {
        if( (x & 1)!=0)
        {
            xInput=1;
            
        }
        else{ xInput=0;}

        if( (y & 1)!=0)
        {
            yInput=1;
        }
        else{ yInput=0;}

        cout<<endl<<"xI:"<<xInput<<"\t";
        cout<<"yI:"<<yInput<<"\t";

        if(xInput!=yInput)
        {
            ans++;
        }

        x= (x>>1);
        y= (y>>1);
    }

    return ans;

}


int main()
{
    system("cls");
    int hammingDistanceVar=0;
    int x,y;
    cin>>x>>y;
    hammingDistanceVar=hammingDistance(x,y);
    cout<<endl<<"hammingDistance:"<<hammingDistanceVar;
    return 0;
}