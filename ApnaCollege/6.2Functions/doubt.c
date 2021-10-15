#include<stdio.h>
#include<conio.h>

int main()
{   system("cls");
    int i;char c; float f; long int l; double d; 

    printf("Enter i:");
    scanf("%d",&i);
    printf("%d\n",i);

     printf("Enter c:");
    scanf("%c",&c);
    printf("%c\n",c);

     printf("Enter f:");
    scanf("%f",&f);
    printf("%f\n",f);

     printf("Enter long:");
    scanf("%ld",&l);
    printf("%ld\n",l);

     printf("Enter double:");
    scanf("%lf",&d);
    printf("%lf\n",d);
}