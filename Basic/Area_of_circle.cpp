#include <iostream>
#include <cmath>
using namespace std;

float circle_area(int r)
{
    return 3.14 * r * r;
}

int main()
{
    float rad;
    cout << "Enter the Number : "
         << endl;
    cin >> rad;
    cout << "Area Of Circle is : " << circle_area(rad)
         << endl;
    return 0;
}