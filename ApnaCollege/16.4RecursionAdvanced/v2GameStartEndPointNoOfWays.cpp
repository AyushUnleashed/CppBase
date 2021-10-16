#include<iostream>
//#include<conio>
using namespace std;

//count of paths
int answer(int start,int end)
{
    if(start==end)
    {
        return 1;
    }

    if(start>end)
    {
        return 0;
    }

    int count=0;
    for(int i=1;i<=6;i++)
    {
        count =count + answer(start+i,end);
    }
    return count;
}

int main()
{
    //system("cls");
    int length;
    cin>>length;
    int start,end;
    start=0; end = length-1;
    cout<<"\nTotal paths to reach";
    cout<<endl<<"From "<<start<<" "<<end<<" is:";
    //step betweeen 1 to 6 dice
    cout<<endl<<answer(start,end);
}