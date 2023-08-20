/*
Aim: Write a program in C++ that first initializes an array of 5 given numbers (short, float, double). The program must add these numbers by traversing this array with a pointer. The output should print the starting address of the array with the size of the numbers ( In Bytes ) to which it points. The program must also print the sum and the pointer address with addition of every number as well as the ending address.
*/

#include <iostream>

using namespace std;

int main()
{
    int N=5, ub=N-1;
    float arr[N], sum=0;
    float *ptr = arr;

    cout << "Enter 5 Numbers: ";
    for( int i=0 ; i<=ub ; i++)
        cin >> arr[i];

    cout << "\nStarting address of Array: " << ptr << endl;
    cout << "The size of the number is " << sizeof(*ptr) << "Bytes.\n\n";

    for( int i=0 ; i<=ub ; i++)
    {
        sum = sum + (*ptr);
        cout << "Sum = " << sum;
        cout << "\nAddress = " << ptr << endl << endl;
        ptr++;
    }

    cout << "\nFinal sum = " << sum;
    cout << "\nThe ending address of an array = " << --ptr;
    return 0;
}