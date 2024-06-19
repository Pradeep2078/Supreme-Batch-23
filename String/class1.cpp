#include <iostream>
using namespace std;

int getLength(char arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '\0')
            break;
        else
            count++;
    }
    return count;
}

void covertToUpperCase(char arr[], int n)
{
    int len = getLength(arr, n);
    for (int i = 0; i < n; i++)
    {
        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
        }
        arr[i] = ch;
    }
}

int main()
{
    char arr1[100];
    cout << "Enter the input" << endl;

    for (int i = 0; i < 7; i++)
    {
        cin >> arr1;
    }

    covertToUpperCase(arr1, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr1[i]
             << " ";
    }

    cout << endl;

    return 0;
}