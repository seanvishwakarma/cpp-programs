/* AIM: write a program in C++ with complex constructor to add the given two complex numbers
{ A = 2 + 3i , B = 4 + 5i}. The program should print the given complex numbers and their sum.
*/

#include <iostream>

using namespace std;

class complex
{
private:
    int img, real;

public:
    complex(){};
    complex(int, int);
    complex operator+(complex);
    void print(void);
};
complex::complex(int r, int i)
{
    real = r;
    img = i;
}
complex complex::operator+(complex c)
{
    complex sum;
    sum.img = img + c.img;
    sum.real = real + c.real;
    return sum;
}
void complex::print(void)
{
    cout << real << " + " << img << "i\n";
}
int main()
{
    complex A(2, 3), B(4, 5), C;
    C = A + B;
    cout << "A = ";
    A.print();
    cout << "B = ";
    B.print();
    cout << "C = A + B = ";
    C.print();
    return 0;
}