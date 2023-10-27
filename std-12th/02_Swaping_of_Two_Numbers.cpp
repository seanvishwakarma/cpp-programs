/*
Aim: Write a program in c++ that exchanges data (Pass by Reference) using swap function to interchange the given two numbers and display the numbers Before and After swapping
*/

#include <iostream>

using namespace std;

void swap(int&,int&);

int main()
{
    int m,n; 

    cout << "Enter the first number: ";
    cin >> m;
    cout << "Enter the secound number: ";
    cin >> n;

    cout << "\nBefore Swapping: \n";
    cout << "First Number = " << m;
    cout << "\nSecound Number = " << n;

    swap(m,n);

    cout << "\n\nAfter Swapping: \n";
    cout << "First Number = " << m;
    cout << "\nSecound Number = " << n;

    return 0;
}

void swap( int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}