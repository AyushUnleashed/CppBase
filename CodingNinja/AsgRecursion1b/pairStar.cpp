#include <iostream>
using namespace std;

void helper(char input[],int start)
{
	if (input[start] == '\0' || input[start+1] == '\0') {
		return;}
    
   	helper(input,start+1);
    
    if(input[start]==input[start+1])
    {
        //shift all by 2 to make space
         int size=0;
        while(input[size]!='\0')
        size++;
        
        for(int i=size-1;i>=start+1;i--)
        {
            input[i+1]=input[i];
        }
        input[start+1]='*';
        input[size+1]='\0';
    }
}

void pairStar(char input[]) {
    helper(input,0);
}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
