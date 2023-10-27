/*
Aim: Write a program in C++ that first initializes an array of given 10 sorted real numbers. The program must verify whether a given element belongs to this array or not, using "Binary Search" Technique. The element ( to be searched ) is to be entered at the time of execution. If the number is found, the program should print it's positon in the array Otherwise it should print "The number is not Found.".
*/

#include <iostream>

using namespace std;

int main()
{
    int N=10;
    int arr[N], lb=0, ub=N-1 , KEY, MID=(ub+lb)/2;

    cout << "Enter 10 Sorted Real Numbers: ";
    for( int i=0 ; i<=ub ; i++ )
        cin >> arr[i];

    cout << "\nEnter the number to be searched in an array: ";
    cin >> KEY;

    while( (lb<=ub) && (arr[MID]!=KEY) ){
        if( KEY < arr[MID] )
            ub=MID-1;
        else    
            lb=MID+1;
        MID=(lb+ub)/2;
    }

    if( arr[MID]==KEY )
        cout << KEY << " found at " << MID << " position in an Array.";
    else 
        cout << "The number is Not Found.";
    
    return 0;
}