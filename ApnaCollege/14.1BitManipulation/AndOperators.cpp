#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int a=4; int b=5;
    bool ans = ((a==6) && (b++==6)); 
    //right side not evaluated
    cout<<ans;
    cout<<"\nb:"<<b;
    return 0;
}