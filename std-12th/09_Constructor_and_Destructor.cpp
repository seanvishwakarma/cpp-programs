/* AIM: Write a program in C++ that initialises a ratio class with no parameters, as a default constructor
the program must print the message "OBJECT IS BORN" during initialisation. It should display the message "NOW OBJECT IS ALIVE", when the
first member function Ratio x is called. The program must Display "OBJECT DIES" when the class destructor is called
for the object when it reached the end of it's scope.
*/

#include <iostream>

using namespace std;

class ratio
{
private:
    int num, den;

public:
    ratio()
    {
        cout << "OBJECT IS BORN." << endl;
    }
    ~ratio()
    {
        cout << "OBJECT DIES." << endl;
    }
};

int main()
{
    ratio x;
    cout << "Now x is alive.\n";
    cout << "At the end of the program.\n";
    return 0;
}