#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    int firstOccur=-1;
    int lastOccur=-1;
    int occurIndex=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {   occurIndex=i;
            if(firstOccur==-1)
            {
                firstOccur=occurIndex;
            }
            lastOccur=occurIndex;
        }
    }

    cout<<"Ocurrences of "<<key<<" ";
    cout<<"First at:"<<firstOccur<<" Last at:"<<lastOccur;
    return 0;
}