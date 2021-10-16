#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<algorithm>
using namespace std;

int main()
{
    system("cls");
    string input;int choice;
    getline(cin,input);
    cout<<"Do you wanna convert it to:\n1.Uppercase\n2.Lowercase\n";
    cin>>choice;
    if(!(choice==1 || choice==2))
    {
        cout<<"Error";return 0;
    }   

if(choice==1)
{
    // for(int i=0;i<input.length();i++)
    // {
    //     if(islower(input[i]))
    //     {
    //         input[i]=toupper(input[i]);
    //         //input[i]-=32;
    //     }
    // }

    transform(input.begin(),input.end(),input.begin(),::toupper);
}
else
{
      for(int i=0;i<input.length();i++)
    {
        if(isupper(input[i]))
        {
            input[i]=tolower(input[i]);
            //input[i]+=32;
        }
    }
}

cout<<input;

}