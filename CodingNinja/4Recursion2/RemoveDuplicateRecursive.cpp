#include<iostream>
#include<string.h>
using namespace std;

void helper(char input[],int start)
{
	if (input[start] == '\0' || input[start+1] == '\0') 
    {
		return;
    }
    
   	helper(input,start+1);
    int size=strlen(input);

    if(input[start]==input[start+1])
    {
        //shift all element to left
        //se last element as null character

        //shift all element by 1 to left
        for(int i=start;i<=size-2;i++)
        {
            input[i]=input[i+1];
        }
        input[size-1]='\0';
    }
}

void removeConsecutiveDuplicates(char *input) {
    helper(input,0);
}


int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}