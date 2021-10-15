#include<iostream>
#include<conio.h>
using namespace std;

void setBit(long long &num,int posn)
{
    int check = 1<< posn;   //changing bit to given posn using left shift
    // if if already has bit 1 then okay otherwise set  bit to 1 (we used bitwise or aif anyone has  1 , it will become 1)
    num = (num | check); // changing num;
}


int main()
{
    system("cls");
    long long num;
    cin>>num;
    long long secondNum=0;
    int arr[32];int brr[32];

    for(int i=0;i<32;i++)
    {
        arr[i]=0;
        brr[i]=0;
    }

    int index=0;
    while (num>0)
    {
        if( (num & 1 )!=0)    //if bit is 1
        {   cout<<"\nBit is 1 at index:"<<index<<" of number:"<<num;
            //indexes.push_back(index);
            arr[index]+=1;
            cout<<endl<<arr[index];
        }
        
        num=num>>1;
        index++;
    }

    //cout<<endl<<arr[0];

    for(int i=0;i<32;i++)
    {
        int temp=arr[i];
        arr[i]=brr[32-i-1];
        brr[32-i-1]=temp;
    }

    for(int i=0;i<32;i++)
    {   
        //cout<<"\nbrr["<<i<<"]:"<<brr[i];
        if(brr[i]==1)
        {setBit(secondNum,i);}
    }

    cout<<"\nChangedNum:"<<secondNum;
    return 0;

}