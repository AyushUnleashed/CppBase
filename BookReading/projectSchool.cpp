#include<fstream>  
#include<conio.h> 
#include<stdio.h>  
#include<process.h> 
#include<stdlib.h>
#include<iostream>
using namespace std;
 
//Function Prototying void menu();  

void search(); 
void add(); 
void displayall(); 
void modify();  
void del(); 
void options(); 
void sizeoffile(); 
void menu();
 
//Class for Railway Reservation 
class RR 
{   int Tr_no; int Ti_no;  char Trname[30]; char Boardpt[50];  char Dest[50]; char P_name[50];  int  P_age;         
    public:  
    RR() 
    {
        Ti_no=0;
    }  
    void getdata(); 
    void display();  
    int getTi_no()   
    {
        return Ti_no;
    }

}r1;
//Function for getting information. 
void RR::getdata() 
{   cout<<"\nEnter Ticket no:"; 
    cin>>Ti_no;  
    cout<<"Enter Train no:"; 
    cin>>Tr_no;  
    cout<<"Enter Train Name:"; 
    gets(Trname);  
    gets(Trname); 
    cout<<"Enter your Boarding point:"; 
    gets(Boardpt);  
    cout<<"Enter your Destination:"; 
    gets(Dest);  
    cout<<"Enter Passenger's Name:"; 
    gets(P_name);  
    cout<<"Enter Passenger's Age:";
    cin>>P_age; } 
 
//Function for Displaying information. 
void RR::display() 
{   
    cout<<"\n=====================================\n"; 
    cout<<"\nTicket no:"<<Ti_no; cout<<"\nTrain no:"<<Tr_no; 
    cout<<"\nTrain Name:"<<Trname; cout<<"\nBoarding point:"<<Boardpt; 
    cout<<"\nDestination :"<<Dest; cout<<"\nPassenger's Name:"<<P_name; 
    cout<<"\nPassenger's Age:"<<P_age; cout<<"\n=====================================\n";
} 

int main() 
{   
    int n,rno,i; 
    fstream fio("RR.dat",ios::in|ios::out|ios::binary);  
    system("cls");  
    menu();  
    fio.close(); 
    getch(); 
    return(0);
} 
 
//Menu for program. 

void menu() 
{   
    int ch;  
    options();  
    cin>>ch;  
    while(ch)  
    {   
        switch(ch)   
        {   case 0: exit(0);
                    break;    
            case 1: add(); 
                    break;   
            case 2: search(); 
                    break;   
            case 3: displayall(); 
                    break;   
            case 4: modify(); 
                    break;   
            case 5: del(); 
                    break;   
            case 6: sizeoffile(); 
                    break;   
            default: cout<<"Wrong Input please enter the correct value....";   
        }   
        
        system("pause");   
        system("cls");   
        options();   
        cin>>ch; 
    }
} 
 
//Available options. 

void options() 
{   
    cout<<"\n=====================================\n";  
    cout<<"Welcome to Railway Reservation portal\n";  
    cout<<"\n=====================================\n";  
    cout<<"0. EXIT....\n";  
    cout<<"1. Book Ticket...\n";  
    cout<<"2. Search a Ticket...\n";  
    cout<<"3. Display all Passengers...\n";  
    cout<<"4. Modify your Ticket...\n";  
    cout<<"5. Cancel Your Ticket...\n";  
    cout<<"6. View the Size of File...\n";  
    cout<<"\nEnter Your Choice  : "; 

}

//for Searching. 

void search() 
{   
    ifstream fin("RR.dat",ios::in|ios::binary);  
    int tno,i=0;  char found='n';  
    cout<<"\nEnter Ticket No. to be searched : ";  
    cin>>tno;  
    while(fin.read((char*)&r1,sizeof(r1)))  
    {   
        if(r1.getTi_no()==tno)   
        { 
            r1.display(); found='y';
        }   
        
        i++;  
    } 
    if(found=='n')  
    cout<<"\nThe Ticket No. "<<tno<<" is not in the file...\n";  
    fin.close();
} 
 
//For Displaying all data of the students. 
void displayall() 
{   
    ifstream fin("RR.dat",ios::in|ios::binary);  
    while(fin.read((char*)&r1,sizeof(r1)))  
    {
        r1.display();
    }  
    fin.close(); 
} 
 
//For adding the data into the file. 
void add() 
{   
    char ch='y';  
    ofstream fout("RR.dat",ios::out|ios::app|ios::binary);  
    while(ch=='y'||ch=='Y')  
    {   
        r1.getdata();   
        fout.write((char*)&r1,sizeof(r1));   
        cout<<"\nDo you want to Book more : "; 
        cin>>ch; 
    }  
    
    cout<<"\nYour Ticket is Reserved...\n";  
    fout.close(); 
} 
 
//For modifing data. 
void modify() 
{   
    fstream fio("RR.dat",ios::in|ios::out|ios::binary);  
    int tno;  char found='n';  
    fio.seekg(0);  
    cout<<"\nEnter the Ticket No. whose record is to be modified: ";  
    cin>>tno;   
    while(fio)  
    {   
        int loc=fio.tellg();   
        fio.read((char*)&r1,sizeof(r1));   
        if(r1.getTi_no()==tno)   
        {   
            r1.getdata();   
            found='y';   
            fio.seekg(loc);   
            fio.write((char*)&r1,sizeof(r1));   
            cout<<"\nYour record of ticket No. "<<tno;    
            cout <<" has been updated....";
        } 
    }
    if(found=='n')  
    {
        cout<<"\nThis Ticket "<<tno<<" is not in the file...\n";  
    }
    fio.close(); 
} 
 
//for deleting record. 
void del() 
{   
    int tno; 
    char found='n',confirm='n';  
    fstream fio("RR.dat",ios::in|ios::out|ios::binary|ios::app);  
    ofstream fout("temp.dat",ios::out|ios::binary|ios::app); 
    cout<<"\nEnter the Ticket no. for cancelation of ticket: ";  
    cin>>tno; 
    while(fio.read((char*)&r1,sizeof(r1)))  
    {   
        if(r1.getTi_no()==tno)  
        {   
            r1.display();    
            found='y';    
            cout<<"Are you sure you want to cancel your ticket:";    
            cin>>confirm;    
            if(confirm=='n')     
            {   
                fout.write((char*)&r1,sizeof(r1));
            }
        }   
        else   
        {   
            fout.write((char*)&r1,sizeof(r1));
        }  
    }  
    if(found=='n')  
    {   
        cout<<"\nThe Ticket No."<<tno<<" is not in the file...\n";
    }  
    fio.close();  
    fout.close();  
    remove("RR.dat"); 
    rename("temp.dat","RR.dat"); 
    } 
 
//To determine size of the file. 
void sizeoffile() 
{   
    fstream fio("RR.dat",ios::in|ios::out|ios::binary);  
    int size,begin,last; 
    begin=fio.tellg();  
    while(fio.read((char*)&r1,sizeof(r1)));
    last=fio.tellg();  
    fio.close();  
    cout<<"\nThe Size of RR.dat file is : "<<(last-begin)<<" bytes...\n";

} 