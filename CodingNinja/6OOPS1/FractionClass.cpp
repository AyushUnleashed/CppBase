#include<iostream>
using namespace std;

// Finds GCD of 2 numbers

int findGCD(int a,int b)
{ 
    if(b==0) return a;
    return findGCD(b,a%b);
}

class Fraction
{
    int numerator;
    int denominator;

    public:
    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }

    // Print a Fraction number
    void print()
    {
        cout<<this->numerator<<"/"<<this->denominator;
        //or
        //cout<<numerator<<"/"<<denominator; 
        // imlpicitly it is numerator of current object no need to use this
    }

    //simplify the fraction number
    void simplify()
    {
        int gcd =findGCD(numerator,denominator);
        numerator/=gcd; // or this->numerator = this->numerator/gcd;
        denominator/=gcd;
    }

    //adds second fraction number to first one
    void addToFirst(Fraction const &f2);

    //multiplies second fraction number to first one
    void multiplyToFirst(Fraction const &f2);
};



void Fraction::addToFirst(Fraction const &f2)
{
    this->numerator = (this->numerator)*f2.denominator+f2.numerator*(this->denominator);
    this->denominator = this->denominator*f2.denominator;
    simplify(); //bydefault know to call for this(f1 here)
}

void Fraction::multiplyToFirst(Fraction const &f2)
{
    this->numerator = (this->numerator)*f2.numerator;
    this->denominator = this->denominator*f2.denominator;
    simplify(); //bydefault know to call for this(f1 here)
}

int main()
{
    Fraction f1(10,3);
    Fraction f2(5,3);
    cout<<"\nOrignal:";
    cout<<endl<<"f1:";f1.print();cout<<" "<<"f2:";f2.print();

    f1.addToFirst(f2);
    cout<<"\nAdd to First:";
    cout<<endl<<"f1:";f1.print();cout<<" "<<"f2:";f2.print();
    f1.multiplyToFirst(f2);
    cout<<"\nMultiply to First:";
    cout<<endl<<"f1:";f1.print();cout<<" "<<"f2:";f2.print();

    return 0;


}