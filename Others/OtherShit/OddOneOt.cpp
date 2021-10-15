#include<iostream>
#include<conio.h>
using namespace std;

//n>=3

int main()
{
    system("cls");int n;bool diff=true;int ind;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // code to solve 
    for(int i=0;i<n;i++)
    {
        int ele1=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(ele1==arr[j])
            {
                diff=false;
                break;
            }
            else{ diff=true; ind=j; break;}
        }
    }

    if(diff==true)
    {
        cout<<endl<<"index:"<<ind<<" Element:"<<arr[ind];
    }
    else{cout<<"Nhi chala";}
    return 0;
}