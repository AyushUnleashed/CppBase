#include <iostream>
using namespace std;


void helper(char input[],int start)
{
    
    if (input[start] == '\0') 
    {  return;}

    //removed all x from smaller part
    helper(input,start+1);

    int size=0;
    while(input[size]!='\0')
    {
        size++;
    }

    if(input[start]=='x')
    {
        //shift all element by 1 to left
        for(int i=start;i<=size-2;i++)
        {
            input[i]==input[i+1];
        }
    }
    else
    {
        //do nothing
    }
}

void removeX(char input[]) {
    helper(input,0);
}



int main() {
    char input[50];
    cin >> input;
    removeX(input);
}
