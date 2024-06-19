#include <iostream>
using namespace std;

int fibo(int n)
{
    // int sum = 0;
    // 1. base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    // 2. recursion call
    int sum = fibo(n - 2) + fibo(n - 1);
    // cout << "Term are : "
    //      << endl
    //      << sum
    //      << endl;
    
    return sum;
    // 3. processing
}

int main()
{
    int n = 9;
    cout << fibo(n) <<endl;
    return 0;
}