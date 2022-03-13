#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;

string getString(int n)
{
    string input;
    switch(n){
    case 2: input = "abc";
        break;
    case 3: input = "def";
        break;
    case 4: input = "ghi";
        break;
    case 5: input = "jkl";
        break;
    case 6: input = "mno";
        break;
    case 7: input = "pqrs";
        break;
    case 8: input = "tuv";
        break;
    case 9: input = "wxyz";
        break;           
    }
    return input;
}


void printKeypadHelper(int num,string output)
{   
    //last digit of given number
    int lastDigit = num%10; 
    //gets corresponding string from a digit;
    string input = getString(lastDigit);

    if(input.length()==0)
    {
        cout<<output<<endl;
        return;
    }

    //  input[j] j -> 0 to input.length() 
    for(int j=0;j<input.length();j++)
    {
        printKeypadHelper(num/10,input[j]+output);
    }
}

void printKeypad(int num)
{   
    printKeypadHelper(num,"");
}

int main()
{
    int num;
    cin>>num;
    printKeypad(num);

    return 0;
}