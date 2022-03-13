#include<iostream>
using namespace std;

class ComplexNumbers {
    int real;
    int imaginary;

    public:
    ComplexNumbers(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }

    void print()
    {
        cout<<this->real<<" + i"<<this->imaginary;
    }


    void plus(ComplexNumbers const &c2);
    void multiply(ComplexNumbers const &c2);
    
};

void ComplexNumbers::plus(ComplexNumbers const &c2)
{
    this->real = (this->real)+c2.real;
    this->imaginary = this->imaginary+c2.imaginary;

}

void ComplexNumbers::multiply(ComplexNumbers const &c2)
{
    int a=this->real;
    int b=this->imaginary;
    int c=c2.real;
    int d=c2.imaginary;
    this->real = a*c-b*d;
    this->imaginary =a*d+b*c;
}

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}