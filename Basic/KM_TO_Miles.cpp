#include <iostream>
using namespace std;

float convertKmToMiles(int km)
{
    return km * 0.6214;
}

int main()
{
    float km;
    cout << "Enter the Number in KM : "
         << endl;
    cin >> km;
    cout << "Miles is : " << convertKmToMiles(km)
         << endl;
    return 0;
}