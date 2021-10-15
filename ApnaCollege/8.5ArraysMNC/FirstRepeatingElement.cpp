#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

//Program to print index of the first repeating element;//repeat hone wzle me se jo sabse pwhle aaya tha uska index
int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    const int N = 100;//my pc can't set N to 1e6+2 toh 100 se upar ke elements enter karoge toh kaam nhi krega
    int idx[N];
    
    //Setting whole index array -1;
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }

    //To insert location of elements in idx array( 5 agar 2 index p hai array me, toh idx[5]=2 idx me location store kar di)
    int minindex=INT32_MAX;

    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {   //agar element repeat hua toh compare karlo isse chote index wala toh nhi h
            minindex=min(minindex,idx[arr[i]]);
        }
        else
        {   //element first time aaye toh store krne k liye
            idx[arr[i]]=i;
        }
    }

    if(minindex==INT32_MAX) //agar sare element pow(10,6) se badhe ho toh 
    {
        cout<<"-1"<<endl;
    }
    else    //nhi toh ans print karo
    {
        cout<<"First Repeating Element is at, \nlocation:"<<(minindex+1);
    }
    
    
    return 0;

}