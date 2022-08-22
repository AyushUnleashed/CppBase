#include <iostream>
using namespace std;


// Change in the given string itself. So no need to return or print anything

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
        if(size==1)
        {
            input[start]='\0';
            return;
        }
        //shift all element by 1 to left
        for(int i=start;i<size-1;i++)
        {
            input[i]=input[i+1];
        }
        input[size-1]='\0';
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
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
