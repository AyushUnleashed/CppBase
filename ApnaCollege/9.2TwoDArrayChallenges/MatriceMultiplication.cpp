#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n,m,p,q;
    cout<<"Enter row and column for both matrices:\n";
    cin>>n>>m>>p>>q;
    float arr1[n][m],arr2[p][q];
    float ansMatrix[n][q];

    if(m!=p)
    {   
        cout<<"\nNot Possible";
        return 0;
    }
    
    
    //Give Input
    cout<<"\nEnter MAtrix1:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"\nEnter MAtrix2:\n";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>arr2[i][j];
        }
    }

//code to multiply them;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {   
            ansMatrix[i][j]=0;
            for(int k=0;k<m;k++)
            {
                ansMatrix[i][j]+=(arr1[i][k]*arr2[k][j]);
            }
        }
    }

    cout<<"\nTranspose is:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<ansMatrix[i][j]<<" ";
        }
        cout<<endl;     
    }
    return 0;
}

