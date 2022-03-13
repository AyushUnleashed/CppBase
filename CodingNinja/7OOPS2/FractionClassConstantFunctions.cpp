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

    //default constructor needs to be intialised because,
    //otherwise you can't declare normal object, 
    // you will need to pass parameters for parameterised functions because they are defined.

    Fraction()
    {

    }
    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }

    //getters and setters are needed to access private variables outside the scope.


    // if function doesn't change object properties , it can be set as const and be used by const object
    int getNumerator() const
    {
        return numerator;
    }

    int getDenominator() const
    {
        return denominator;
    }

    void setNumerator(int numerator) 
    {
        this->numerator = numerator;
    }

    void setDenominator(int denominator)
    {
        this->denominator = denominator;
    }


    // Print a Fraction number
    void print() const
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
    Fraction const f3;

    // you can't call getter and setters with const objects.
    // to call a getter , it has to be a const function [ do no changes to object]
    cout<<f3.getNumerator();
    f3.print();

    //set functions are not allowed, they do changes to object.
    // f3.setNumerator(5);

    return 0;
}