#include<iostream>
using namespace std;

//Calci using Switch

int main()
{   float a,b,result;
    cout<<"\nEnter a and b:";
    cin>>a>>b;
    char operation;
    cout<<"Enter operation:";
    cin>>operation;
    

    switch(operation)
    {
        case '+':
            result=a+b;
            cout<<result;
            break;
        
        case '-':
            result=a-b;
            cout<<result;
            break;
        
        case '*':
            result=a*b;
            cout<<result;
            break;
        
        case '/':
            result=a/b;
            cout<<result;
            break;
        
        default:cout<<"\nEnter valid operation";

    }
    return 0;
    
}