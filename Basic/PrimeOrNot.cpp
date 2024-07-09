#include <iostream>
using namespace std;

bool primeOrNot(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printAllPrimeNum(int num1,int num2)
{
    for (int i = num1; i <= num2; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
            }
        }
        if(flag) cout << i << " is prime." << endl;
        else cout << i << " is not prime." << endl;
    }
}

int main()
{
    int num1,num2;
    cout << "Enter the Number 1 : "
         << endl;
    cin >> num1;
    cout << "Enter the Number 2 : "
         << endl;
    cin >> num2;
    // bool res = primeOrNot(num);
    // if (res)
    // {
    //     cout << "Number is Prime" << endl;
    // }
    // else
    // {
    //     cout << "Number is not prime" << endl;
    // }

    printAllPrimeNum(num1+1,num2);
    return 0;
}