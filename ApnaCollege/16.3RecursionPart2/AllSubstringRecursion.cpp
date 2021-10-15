#include<iostream>
#include<string>
using namespace std;

//Program to print all substrings of given string
//Recursion
void subSet(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return; 
    }

subSet(input.substr(1),output); //nhi liya
subSet(input.substr(1),output+input[0]);//liya hai
}

int main()  
{
    system("cls");  
    string s;
    cin>>s;
    subSet(s,"");
    return 0;
}

