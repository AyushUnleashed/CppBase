#include<iostream>
#include<conio.h>
using namespace std;

//code to print no. in decreasing then increasing block2
int main()
{
    system("cls");
    int n,counter;
    cin>>n;
    counter=n;
    int p=2*n-1;
    system("cls");

    int i;
    for( i=1;i<=n;i++)
    {
        
        //Block2
        for(int j=1;j<=p;j++)
        {
            cout<<counter<<" ";
        }
        p=p-2;
        counter--;


        cout<<endl;
    }

//Two interations needed to make it continue
    p=p+2;counter++;
    p=p+2;counter++;

    for(i=n-1;i>0;i--)
    {   
        
        
        //Block2
        for(int j=1;j<=p;j++)
        {
            cout<<counter<<" ";
        }
        counter++;
        p=p+2;
        cout<<endl;
    }

    return 0;
}





