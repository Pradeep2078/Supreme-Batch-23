#include<iostream> 
using namespace std; 

bool checkEvenOdd(int num){
    return (num&1) == 0;
}

int main() 
{
    int num;
    cout << "Enter the Number : "
         << endl;
    cin >> num;
    bool even = checkEvenOdd(num);
    if(even){
        cout << "Number is even" <<endl;
    } else {
        cout << "Number is odd" << endl;
    }
    return 0;
}