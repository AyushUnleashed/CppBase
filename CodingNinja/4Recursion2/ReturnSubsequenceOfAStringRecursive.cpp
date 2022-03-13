#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int subs(string input,string output[])
{
    if(input.length()==0)
    {
        output[0]="";
        return 1;
    }

    string smallString = input.substr(1);
    int smallStringSize = subs(smallString,output);

    for(int i=0;i<smallStringSize;i++)
    {
        output[i+smallStringSize]=input[0]+output[i];
    }

    return 2*smallStringSize;
}

int main()
{
    string input;
    cin>>input;
    int n=input.length();
    int total = pow(2,n);
    string* output = new string[total];
    int count = subs(input,output);

    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
    return 0;
}