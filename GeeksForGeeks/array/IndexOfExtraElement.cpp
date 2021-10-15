#include<iostream>
#include<conio.h>
using namespace std;

int findExtra(int a[], int b[], int n) 
{
    int counter =0;
    int index = -1;

    for(int i=0;i<n-1;i++)
    {
        if(a[i] == b[i])
        {
            //do nothing
            counter++;
        }
        else
        {
            index = i;
            break;
        }
    }

    if(counter == 0)    //1st element different // counter not changed
    {
        index = 0;
    }
    else if(counter == n-1 )   // all element are same only last one left
    {
        index = n-1;    
    }

    return index;
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    int a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }

    cout<<endl<<findExtra(a,b,n);

}