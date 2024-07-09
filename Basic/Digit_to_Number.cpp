#include <iostream>
using namespace std;

void printDigitToNumber(int dig){
    while(dig != 0){
        int rem = dig % 10;
        cout << rem << endl;
        dig = dig / 10;
    }
}

int main()
{
    int num;
    cout << "Enter the Number : "
         << endl;
    cin >> num;
    printDigitToNumber(num);
    return 0;
}