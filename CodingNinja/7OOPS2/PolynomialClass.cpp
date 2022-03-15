#include<iostream>
using namespace std;


//Array -> indices = degree , value = coefficient
class Polynomial{

    public:
    int *degCoeff;      // Name of your array (Don't change this)
    int capacity;

    //Default Constructor || set 0 [x]
    //Copy Constructor [x]
    //Copy Assignment Constructor || p2=p1; [x]

    //Print Polynomial coeffxdegree[x]
    //Set coefficient ||  p1.setCoefficient(degree,coeff) || if(degree> capacity) || increase array size till it fits
   // [x]
    // +Overlaod p3=p1++p2 [x]
    // -Overload p3=p1-p2 [x]
    // *Overload p3=p1*p2

    Polynomial()
    {
        capacity =10;
        degCoeff = new int[capacity];

        for(int i=0;i<capacity;i++)
        {
            degCoeff[i]=0;
        }
    }


    //copy and assignment operator by default do shallow copy
    Polynomial(Polynomial const &p) 
    {
        //for deep copy
        // this = copied to
        // p = copied from
        this->capacity =p.capacity;
        this->degCoeff = new int[capacity];

        for(int i=0;i<capacity;i++)
        {
            this->degCoeff[i]=p.degCoeff[i];
        }
    }

    void operator = (Polynomial const &p)
    {
        //for deep copy
        // this = copied to
        // p = copied from
        this->capacity =p.capacity;
        this->degCoeff = new int[capacity];

        for(int i=0;i<capacity;i++)
        {
            this->degCoeff[i]=p.degCoeff[i];
        }
    }

    void print() const{

        for(int i=0;i<capacity;i++){
            if(degCoeff[i]!=0)
            {
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
    }

    void setCoefficient(int degree,int coefficient){

        if(degree>=capacity)
        {   
            //size double try again
            int *newCoeff = new int[capacity*2];

            //copy old values to double size array
            for(int i=0;i<capacity;i++){
                newCoeff[i]=this->degCoeff[i];
            }
            degCoeff = newCoeff; //changing address to double size array
            delete []newCoeff;
            setCoefficient(degree,coefficient); //this will check if now size is big enough
        }else
        {
            //we set
            degCoeff[degree]=coefficient;
        }
    }

    Polynomial operator + (Polynomial &p2){
        
        //addition of two polynomial

        if(this->capacity > p2.capacity)
        {
            //increase p2 capacity
            p2.capacity =this->capacity;
        }else{
            //increase p1 capacity
            this->capacity =p2.capacity;
        }

        Polynomial p3;
        p3.capacity = p2.capacity;

        //adding two of them

        for(int i=0;i<capacity;i++){
            p3.degCoeff[i] = this->degCoeff[i]+p2.degCoeff[i];
        }
        return p3;
    }

    Polynomial operator - (Polynomial &p2){
        
        //subtraction of two polynomial

        if(this->capacity > p2.capacity)
        {
            //increase p2 capacity
            p2.capacity =this->capacity;
        }else{
            //increase p1 capacity
            this->capacity =p2.capacity;
        }

        Polynomial p3;
        p3.capacity = p2.capacity;

        //subtracting two of them

        for(int i=0;i<capacity;i++){
            p3.degCoeff[i] = this->degCoeff[i]-p2.degCoeff[i];
        }
        return p3;
    }

    Polynomial operator * (Polynomial  &p2)
    {
        if(this->capacity > p2.capacity)
        {
            //increase p2 capacity
            p2.capacity =this->capacity;
        }else{
            //increase p1 capacity
            this->capacity =p2.capacity;
        }

        Polynomial p3;
        p3.capacity = p2.capacity;
    }


}; 



int main(){
    
    return 0;
}
// int main()
// {
//     int count1,count2,choice;
//     cin >> count1;
    
//     int *degree1 = new int[count1];
//     int *coeff1 = new int[count1];
    
//     for(int i=0;i < count1; i++) {
//         cin >> degree1[i];
//     }
    
//     for(int i=0;i < count1; i++) {
//         cin >> coeff1[i];
//     }
    
//     Polynomial first;
//     for(int i = 0; i < count1; i++){
//         first.setCoefficient(degree1[i],coeff1[i]);
//     }
    
//     cin >> count2;
    
//     int *degree2 = new int[count2];
//     int *coeff2 = new int[count2];
    
//     for(int i=0;i < count2; i++) {
//         cin >> degree2[i];
//     }
    
//     for(int i=0;i < count2; i++) {
//         cin >> coeff2[i];
//     }
    
//     Polynomial second;
//     for(int i = 0; i < count2; i++){
//         second.setCoefficient(degree2[i],coeff2[i]);
//     }
    
//     cin >> choice;
    
//     Polynomial result;
//     switch(choice){
//             // Add
//         case 1:
//             result = first + second;
//             result.print();
//             break;
//             // Subtract
//         case 2 :
//             result = first - second;
//             result.print();
//             break;
//             // Multiply
//         case 3 :
//             result = first * second;
//             result.print();
//             break;
            
//         case 4 : // Copy constructor
//         {
//             Polynomial third(first);
//             if(third.degCoeff == first.degCoeff) {
//                 cout << "false" << endl;
//             }
//             else {
//                 cout << "true" << endl;
//             }
//             break;
//         }
            
//         case 5 : // Copy assignment operator
//         {
//             Polynomial fourth(first);
//             if(fourth.degCoeff == first.degCoeff) {
//                 cout << "false" << endl;
//             }
//             else {
//                 cout << "true" << endl;
//             }
//             break;
//         }
            
//     }
    
//     return 0;
// }