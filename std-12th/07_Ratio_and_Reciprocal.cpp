/*
Aim: Wrie a program in C++ with a ratio class using member functions like assign() function to initialize its data memebers (integer numerator and denominator ), convert() function to convert the ratio into double, invert() function to get the inverse of the ratio and print() function to print the ratio and it's reciprocal.
*/

#include <iostream>

using namespace std;

class ratio{
    private:
        int num, den;
    public: 
        void assign(int,int);
        double convert();
        void invert();
        void print();

};

void ratio::assign(int n, int d){
    num=n;
    den=d;
}

double ratio::convert(){
    return ( (double ) num / den );
}

void ratio::invert(){
    int temp = num;
    num = den;
    den = temp;
}

void ratio::print(){
    cout << num << "/" << den << " = " << convert() << endl;
}

int main()
{
    int num, den;
    cout << "Enter Numerator: ";
    cin >> num;
    cout << "Enter Denominator: ";
    cin >> den;

    ratio y;
    y.assign(num,den);
    cout << "y = "; 
    y.print();

    y.invert();

    cout << "1/y = ";
     y.print();
    return 0;
}