#include<iostream>
#include<conio.h>
using namespace std;

//array is in increasing order of elements.

void printarray(int ar[],int n)
{   cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

}

int bsearch(int[],int,int);
int main()
{   system("cls");
    int n,beg=0,end,index,key;
    end=n;
    
    cout<<"\nEnter n:";
    cin>>n;
    int ar[n];
    cout<<"\nEnter elements :";

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int choice=0;

do{     system("cls");
        printarray(ar,n);
        cout<<"\nEnter key to search for:";
        cin>>key;
        int found=bsearch(ar,n,key);
        if(found==-1)
        {
            cout<<"\nElement not found";
        }
        else 
        { 
            cout<<"\nElement found at index:"<<found;
        }

    cout<<"\n\nDo You wanna continue(1 for yes):";
    cin>>choice;
    }while(choice==1);


}

int bsearch(int ar[],int n,int key)
{   
    int beg=0,end=n,mid;
    
    while(beg<=end)
    {   mid=(beg+end)/2;

        if(key==ar[mid])
        {  
            return mid;
        }
        else if(key<ar[mid])
        {
            end=mid-1;
        }
        else if(key>ar[mid])
        {
            beg=mid+1;
        }
    }
    return -1;
}