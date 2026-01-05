#include <iostream>
using namespace std;

int main()
{
    float radius, length, width, base, height;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle = " << 3.14 * radius * radius << endl;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle = " << 0.5 * base * height << endl;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle = " << length * width << endl;
    return 0;
}
