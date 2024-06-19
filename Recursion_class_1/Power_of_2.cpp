#include <iostream>
using namespace std;

int Power(int p, int n)
{
    // 1. base case
    if (n == 0)
        return 1;

    // 2. Recursion call
    int result = p * Power(p, n - 1);

    return result;
    // 3. processing
}

int main()
{
    int power = 8;
    int no_of_times = 2;
    cout << "Power of "
         << power
         << " times "
         << no_of_times
         << " is "
         << Power(power, no_of_times)
         << endl;
    return 0;
}