#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    //int l=(2*n)-1;

    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n)
            {
                cout<<"* ";
            }
            else
            {
                if(j==1 || j==n)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            
        }
        cout<<"\n";
    }
    return 0;
}