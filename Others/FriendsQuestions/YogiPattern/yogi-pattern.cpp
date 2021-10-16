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
    int r;
    cout<<endl<<"Pattern:"<<endl;

    int i;
    for( i=1;i<=n;i++)
    {
        //Block1
        for(int j=1;j<=i-1;j++)
        {   int l=n-j+1;
            //for printing reverse
            cout<<l<<" ";
        }
        
        //Block2
        for(int j=1;j<=p;j++)
        {
            cout<<counter<<" ";
        }
        p=p-2;
        counter--;

        //Block3
        r=n-i+2;
        while(r<=n)
        {
            cout<<r<<" ";
            r++;
        }


        cout<<endl;
    }

//Two interations needed to make it continue
    p=p+2;counter++;
    p=p+2;counter++;

    for(i=n-1;i>0;i--)
    {   
        //Block1
        for(int j=1;j<=i-1;j++)
        {   int l=n-j+1;
            cout<<l<<" ";
        }
        
        //Block2
        for(int j=1;j<=p;j++)
        {
            cout<<counter<<" ";
        }
        counter++;
        p=p+2;

        //Block3
         r=n-i+2;
        while(r<=n)
        {
            cout<<r<<" ";
            r++;
        }
    
        cout<<endl;
    }

    return 0;
}

