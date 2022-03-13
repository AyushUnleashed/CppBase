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

int keypad(int num,string output[])
{   
    //last digit of given number
    int lastDigit = num%10; 
    //gets corresponding string from a digit;
    string input = getString(lastDigit);

    //base case
    if(num==0 || num==1)
    {
        output[0]="";
        return 1;
    }

    //recursive call ,fills output and returns its size
    int smallOutputSize = keypad(num/10,output);
   
    // length of string corresponding to digit
    //eg: 7 => "wxyz" so length is 4
    int lastDigitStringLen = input.length();

    //total size of ouput is product of all possiblities
    //eg: 7295 => 4*3*4*3 possible outputs
    // we get 4*3*4 from 729 so we multiply it by 3(size of 5,jkl) 
    int outputSize=lastDigitStringLen*smallOutputSize;

    //we use temp to avoid adding into previous 
    string temp[outputSize];
    int k=0;
    for(int i=0;i<smallOutputSize;i++)
    {
        for(int j=0;j<lastDigitStringLen;j++)
        {
            temp[k]=input[j]+output[i];
            k++;
        }
    }

    //finally recopying to orignal 
    for(int i=0; i<outputSize; i++){
        output[i] = temp[i];
    }

    return outputSize;
}

int main()
{
    int num;
    cin>>num;

    string* output = new string[5000];
    int count = keypad(num,output);

    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
    return 0;
}