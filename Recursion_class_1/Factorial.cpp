#include<iostream> 
using namespace std; 

int fact(int n){
    // 1.base case
    if(n == 0)
        return 1;
    
    // 2.recursion call
    int f = n * fact(n-1);
    return f;
    
    // 3.processing

}

int main() 
{
    cout << "Factorial is : " << fact(5) << endl;
    return 0;
}