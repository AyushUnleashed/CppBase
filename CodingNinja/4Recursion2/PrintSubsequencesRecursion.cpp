#include<iostream>
#include<string>
using namespace std;

void subSet(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return;
    }

    subSet(input.substr(1),output); //taken
    subSet(input.substr(1),output+input[0]);//not taken
}

int main()  
{
    system("cls");  
    string s;
    cin>>s;
    subSet(s,"");
    return 0;
}

