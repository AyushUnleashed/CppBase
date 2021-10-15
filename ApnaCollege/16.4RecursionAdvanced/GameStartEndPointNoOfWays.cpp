#include<iostream>
//#include<conio>
using namespace std;

//count of paths

int  count=0;

void answer(int length)
{
    if(length==0)
    {
        cout<<"\ncount:"<<count;
        count++;
        return;
    }

    for(int i=1;i<=6;i++)
    {   
        // we have taken a step of length i.
        if((length-i)>=0)
        {   cout<<"\nGot called for "<<i;
            answer(length-i);
        }   
    }

    cout<<"\nTotal Paths:"<<count;
}

int main()
{
    //system("cls");
    int length;
    cin>>length;
    int count=0; 
    //step betweeen 1 to 6 dice
    answer(length); 
}