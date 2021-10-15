#include<iostream>
#include<conio.h>
using namespace std;

//Rows and Column are sorted (given)

int main()
{
    system("cls");
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int row=n-1,col=0;
    int input;
    cin>>input;

    bool found=false;
    
    //Give Input array

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    //code to Solve
    cout<<"Pointer at ("<<n-1<<",0)\n";
    while(row>=0 && col<m)
    {
        if(input>arr[n-1][m-1])
        {
            found=0;
            cout<<"\nGreater than all elements";
            break;
        }

        if(input==arr[row][col])
        {   
            found=1;
            cout<<"\nFound in while";
            break;
        }

        if(input<arr[row][0])
        {   cout<<"\nDecreasing Row";
            row--;
        }
        else if(input>arr[row][col])
        {   cout<<"\nIncreasing Col";
            col++;
        }
        else{cout<<"InfiniteLoop me fas gya";}
    }

    if(found==true)
    cout<<"\nFound:"<<found;
    else cout<<"\nSorry Da";
    

    return 0;
}

