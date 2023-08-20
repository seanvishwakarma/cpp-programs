/*
Aim: Write a program in C++ that initializes an array of given 10 real numbers the program must Sort the numbers in Ascending Order. Using "Bubble Sort" Method. It should print the given list of numbers as well as the sorted list.
*/

#include <iostream>

using namespace std;

int main()
{
    int N=10;
    int arr[N],ub=N-1;

    cout << "Enter 10 Real Numbers: ";
    for( int i=0 ; i<=ub ; i++ )
        cin >> arr[i];

    cout << "\nArray Before Sorting: ";
    for( int i=0 ; i<=ub ; i++ )
        cout << arr[i] << " ";

    for( int i=0 ; i<=(ub-1) ; i++ )
        for (int j = (i+1) ; j <= ub; j++)
            if( arr[i] > arr[j] ){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    cout << "\n\nArray After Sorting: ";
    for( int i=0 ; i<=ub ; i++ )
        cout << arr[i] << " ";

    return 0;
}