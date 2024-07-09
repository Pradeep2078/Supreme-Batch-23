#include <iostream>
using namespace std;

long long fact(long long num) {
    if(num == 0) {
        return 1;
    }
    long long n = num * fact(num-1);
    return n;
}

int main()
{
    long long num;
    cout << "Enter the Number : "
         << endl;
    cin >> num;
    cout << "Factorial is " << fact(num) << endl;
    return 0;
}