#include <iostream>
using namespace std;

int getSum(int n){
    // base case 
    if(n == 0)
        return 0;
    
    int sum = n + getSum(n-1);

    return sum;
}

int main()
{
    int n = 4;
    cout << "Sum of Number "
         << n
         << " is "
         << getSum(n)
         << endl;
    return 0;
}