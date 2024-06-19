#include<iostream> 
using namespace std; 

void HeadCounting(int n){
    // 1. base case
    if(n == 0)
        return;

    // 2. recursion  call
    cout << n << endl;
    
    HeadCounting(n-1);
    // 3. processing
}

void TailCounting(int n){
    // 1. base case
    if(n == 0)
        return;

    // 2. recursion  call
    TailCounting(n-1);

    cout << n << endl;
    // 3. processing
}

int main() 
{
    cout << "Head Couting are : " << endl;
    HeadCounting(6);
    cout << "Tail Couting are : " << endl;
    TailCounting(5);
    return 0;
}