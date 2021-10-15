#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

class Wizard
{
    private:
    int spell;
    
    public:
    void brewSpell();
    void useSpell();
    void myPocket();

    Wizard()
    {
        spell=4;
    }
    

}wz;

void Wizard::myPocket()
{
    cout<<"\nWizard have "<<wz.spell<<" Spells";

    cout<<"\n=================================================================\n";
}

void Wizard::brewSpell()
{   
    
        cout<<"\nBrewing Spell's...........";
        spell++;
    
    wz.myPocket();
    
    cout<<"\n=================================================================\n";
}

void Wizard::useSpell()
{  
    if(spell>0)
    {
        int num = rand() % 5 + 0;
        string cspell[6]={
            "Accio",
            "Protego",
            "Muffliato",
            "Obliviate",
            "Stupefy",
            "Crucio"
        };
        
        cout<<"\n Wizard Used "<<cspell[num];
        spell--;

        cout<<"\n=================================================================\n";
    }
    else{cout<<"\nYou used all of your spells";}
}

int main()
{
    system("cls");
    int ch;

    do
    {   getch();
        system("cls");
        cout<<"\n=====================Wizard wala Game============================";
        
        cout<<"\n1.Use Spell";
        cout<<"\n2.Brew Spell";
        cout<<"\n3.My Pocket";
        cout<<"\n4.Khatam kare";
        cout<<"\nEnter choice:";
        cin>>ch;

        switch(ch)
    {
        case 1: wz.useSpell();
        break;

        case 2: wz.brewSpell();
        break;

        case 3: wz.myPocket();
        break;
        
        case 4: exit(0);

    }


    } while (ch!=4);

    
}