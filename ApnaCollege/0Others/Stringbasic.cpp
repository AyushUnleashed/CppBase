    #include <iostream>
    #include<conio.h>
    #include<string.h>
    
    using namespace std;
    void try1();
    int main( ) 
    {   system("cls");
        /*string firstName;
        cout << "Type your first name: ";   
        cin >> firstName; // get user input from the keyboard
        cout << "Your name is: " << firstName;*/
        try1();

    }

    void try1()
    {
        char a[100]; int length;
        printf("Enter a string to calculate its length\n");
        gets(a);
        length = strlen(a);
        printf("Length of the string = %d\n", length); 
    }