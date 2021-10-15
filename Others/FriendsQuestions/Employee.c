#include <stdio.h>

struct employee{
	int code;
	char name[30];
	int d[3];
//	int month;
//	int year;
}e[6]={1,"jethalal",01,02,2021,
	2,"bhide",02,03,2016,
	3,"iyer",28,02,2008,
	4,"mehta",21,12,2019,
	5,"popatlal",12,6,2015,
	6,"sodhi",31,8,2012
	};

void printinfo(struct employee k){
	printf("Code of employee : %d\n",k.code);
	printf("Name of employee : %s\n",k.name);
	printf("Date of joining : %d/%d/%d\n",k.d[0],k.d[1],k.d[2]);
}	
int main(){
	int d[3];
	printf("Enter todays date in the format dd mm yyyy : ");
	scanf("%d %d %d",&d[0],&d[1],&d[2]);
//	printf("Todays date %d/%d/%d", day,month,year);
printf("Therefore employees having tenure greater than or equal to 3 years\n");

int i;
for(i=0;i<6;i++){
	if(d[2]-e[i].d[2]>3){
		printinfo(e[i]);
	}
	else if(d[2]-e[i].d[2]==3){
		if(d[1]-e[i].d[1]>0)
			printinfo(e[i]);
		else if(d[1]-e[i].d[1]==0){
			if(d[0]-e[i].d[0]>=0)
				printinfo(e[i]);
		}	
	}
}
return 0;
}


// #include<stdio.h>
// #include<conio.h>

// struct employee
// {
// 	int code;
// 	char name[30];
// 	int doj[3];
// }hcl[50] = {

// 	001, "Shahnawaz", 13, 1,2006,
// 	004, "Amit Puri", 21, 6,2008,
// 	102, "Irfan Moin", 12, 5, 2012,
// 	131, "Shabnam", 16, 1, 2014
// };

// //void printinfo(struct employee k);
// void printinfo(struct employee e)
// {
// 	printf("\nCode : %d", e.code);
// 	printf("\nName : %s", e.name);
// 	printf("\nDate of joining : %d-%d-%d\n", e.doj[0], e.doj[1], e.doj[2]);
// }

// int main()
// {
// 	int i, d[3];
// 	printf("\nEnter the current date (dd mm yyyy) : ");
// 	scanf("%d%d%d", &d[0], &d[1], &d[2]);
// 	printf("\nEmployees with greater than or equal to 3 years of tenure\n\n");
// 	for (i = 0; i < 4; i++)
// 	{
// 		if (d[2] - hcl[i].doj[2] > 3)
// 			printinfo(hcl[i]);
// 		else if (d[2] - hcl[i].doj[2] == 3)
// 		{
// 			if (d[1] - hcl[i].doj[1] > 0)
// 				printinfo(hcl[i]);
// 			else if (hcl[i].doj[1] == d[1])
// 			{
// 				if (d[0] - hcl[i].doj[0] >= 0)
// 					printinfo(hcl[i]);

// 			}
// 		}
// 	}
// 	_getch();
// 	return 0;
// }