#include <stdio.h>
  
int main()
{
  
    char charType = 'G';
    char arr[] = { 'G', 'F', 'G','g' };
  
    // Calculate and Print
    // the size of charType
    printf("Size of char datatype is: %ld byte\n",
           sizeof(charType));
  
    // Calculate the size of char array
    size_t size = sizeof(arr) / sizeof(arr[0]);
  
    // Print the size of char array
    printf("Size of char array is: %ld byte",
           size);
  
    return 0;
}