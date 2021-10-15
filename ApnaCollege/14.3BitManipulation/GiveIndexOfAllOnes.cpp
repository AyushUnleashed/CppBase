#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;

    vector<int> indexes;
    int index=0;
    while (n>0)
    {
        if( (n & 1 )!=0)    //if bit is 1
        {
            indexes.push_back(index);
        }
        n=n>>1;
        index++;
    }
    cout<<endl<<"We have 1 on following locations:\n";
    for(int i=0;i<indexes.size();i++)
    {
        cout<<indexes[i]<<" ";   
    }

    //code
    
}