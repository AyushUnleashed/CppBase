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
        cout<<this->numerator<<"/"<<this->denominator;cout<<endl;
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
    Fraction add(Fraction const &f2) const;

    Fraction operator + (Fraction const &f2) 
    {
        Fraction f3;
        f3.numerator = (this->numerator)*f2.denominator+f2.numerator*(this->denominator);
        f3.denominator = this->denominator*f2.denominator;
        f3.simplify(); //bydefault call for f1 
        return f3;
    }

    //multiplies second fraction number to first one
    Fraction multiply(Fraction const &f2) const;

    // ReturnType operator operatorToOverlaod (arguments)
    // argument -> Fraction f2 
    // Fraction &f2; // to create alias not to waste memory
    // Fraction const &f2 // previous + insures no change done to f2;
    Fraction operator * (Fraction const &f2) const
    {
        Fraction f3;
        f3.numerator = (this->numerator)*f2.numerator;
        f3.denominator = this->denominator*f2.denominator;
        f3.simplify();  //bydefault call for f1 
        return f3;
    }


    // overloading == , return true if both fraction are equal

    bool operator == (Fraction const &f2) const
    {
        bool isEqual;

        if( (this->numerator == f2.numerator) && ( this->denominator == f2.denominator) )
        {
            isEqual = true;
        }
        else
        {
            isEqual=false;
        }
        
        return isEqual;
    }


    //preincrement operator fraction => ++fraction or fraction +1
    // [fraction -> fraction+denominator] , denominator remain same [check on paper]
    //no argument needed unary will have value in this

    //pre-increment 
    Fraction& operator ++ () 
    {
        numerator=numerator+denominator;
        simplify();
        return (*this);
    }

    //post-increment
    Fraction& operator ++ (int)
    {   
        Fraction fOld(this->numerator,this->denominator); 
        numerator=numerator+denominator; //value increased
        simplify();
        return (fOld); //returning value still the same
    }

};



Fraction Fraction::add(const Fraction &f2) const
{
    Fraction f3;
    f3.numerator = (this->numerator)*f2.denominator+f2.numerator*(this->denominator);
    f3.denominator = this->denominator*f2.denominator;
    f3.simplify(); //bydefault call for f1 
    return f3;
}

Fraction Fraction::multiply(Fraction const &f2) const
{   
    Fraction f3;
    f3.numerator = (this->numerator)*f2.numerator;
    f3.denominator = this->denominator*f2.denominator;
    f3.simplify();  //bydefault call for f1 
    return f3;
}

int main()
{
    Fraction f1(10,3);
    Fraction f2(5,3);

    // f1 is calling the operator overloaded function 
    // f1 become this , f2 passed as argument to overloaded function
    // It returns an ans of Fraction type which we have stored now.
    Fraction f3 = f1 + f2;
    Fraction f4 = f1.add(f2);
    f3.print();
    f4.print();
    cout<<endl;

    Fraction f5 = f1.multiply(f2);
    Fraction f6 = f1 * f2;
    f5.print();
    f6.print();

    Fraction f7=f6;

    if (f7 == f6)
    {
        cout<<"\n Both are Equal";
    }
    else
    {
        cout<<"\n Both are UnEqual";
    }

    cout<<endl;
    
    f7.print();
    Fraction f8 = ++(++f7);
    f7.print();
    cout<<endl;
    f8.print();
    return 0;
}