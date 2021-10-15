#include<iostream>
#include<conio.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    system("cls");
    string numericString;
    cin>>numericString;
    
    sort(numericString.begin(),numericString.end(),greater<int>());
    //sort numericString from start index to end index , such that greater integer is ahead(decreasing order);

    cout<<"\nBiggest no. is:"<<numericString;

    return 0;
}