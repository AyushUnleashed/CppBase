#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    system("cls");

    // char arr[10];
    // //strcpy(arr,"Voldermot");
    // cout<<"Enter array";
    // gets(arr);

    // char *ptr;
    // ptr=&arr[0];
    // for(;*ptr!='/0';)
    // {
    //     cout<<*ptr;
    //     ptr++;
    // }

    int arr[]={10,20,30,40,50};
    int *ptr;
    ptr=&arr[0];

    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<" is stored at:"<<ptr<<endl;
        ptr++;
    }


    return 0;

}