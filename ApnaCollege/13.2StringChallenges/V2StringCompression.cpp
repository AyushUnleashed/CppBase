#include<iostream>
#include<conio.h>
using namespace std;

//method:
// copy non repeating element to ans character array; 
int main()
{
    system("cls");
    string str;
    cin>>str;

    //code
    char ans[100];
    ans[0] = str[0];    //for 0th element so i-1 is not negative
    int count=1;
    for(int i=1;i<str.length();i++) //skipped i=0 
    {
        if(str[i]!=str[i-1])
        {
            ans[count] = str[i]; 
            count++;
        }
    }

    cout<<endl;

    for(int i=0;i<count;i++)
    {
        cout<<ans[i];
    }
    return 0;
}