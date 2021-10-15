#include<iostream>
#include<conio.h>
using namespace std;

void printarray(int[],int);
int lsearch(int,int[],int);
int main()
{   
    system("cls");
    int key,n;
    int ret;bool choice=0;

    cout<<"Enter array size:";
    cin>>n;
    int ar[n];

    cout<<"\nEnter Array elements:";
    //Entering array
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }


    do
    {   system("cls");
        printarray(ar,n);
        cout<<"\nEnter Key to search for:";
        cin>>key;
        ret = lsearch(key,ar,n);
        if(ret==-1)
        {
            cout<<"\nElement not found\n";
        }else
        {
            cout<<"\nElement is: "<<ar[ret]<<" at location: "<<ret+1;
        }

        cout<<"\n\nDo you wanna continue: (1 for yes)\n";
        cin>>choice;
        

    }while(choice==1);
    

return 0;
}

void printarray(int ar[],int n)
{   cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

}
int lsearch(int key,int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(key==ar[i])
        {
            return i;
        }
    }
    return -1;
}