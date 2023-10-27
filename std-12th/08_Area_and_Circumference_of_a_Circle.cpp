/* AIM: Implement a Circle class in C++. Each object of this will represent a circle, storing it's radius
and X and Y co-ordinate of it's centers as floats. Include a default constructor, access functions, an area and
circumference of the circle.
*/

#include <iostream>

using namespace std;

class circle
{
private:
    float x, y, r, a, c;

public:
    void assign(void);
    void area(void);
    void circum(void);
    void print(void);
};

void circle::assign(void)
{
    cout << "Enter the X and Y co-ordinate of circle: ";
    cin >> x >> y;
    cout << "Enter the radius of the circle: ";
    cin >> r;
}

void circle::area(void)
{
    a = (3.14 * r * r);
}

void circle::circum(void)
{
    c = (2 * 3.14 * r);
}

void circle::print(void)
{
    cout << "The X and Y co-ordinate of the cicle is " << x << " " << y << endl;
    cout << "The of the circle is " << r << endl;
    cout << "The area of the circle is " << a << endl;
    cout << "The circumference of the circle is " << c << endl;
}

int main()
{
    circle obj;
    obj.assign();
    obj.area();
    obj.circum();
    cout << endl;
    obj.print();
    return 0;
}