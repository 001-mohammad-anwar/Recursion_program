#include <iostream>
using namespace std;
int CountDigit(int);
int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    cout << CountDigit(num) << " ";
}

int CountDigit(int n)
{
   
    if (n == 0)
        return 0;

    return 1 + CountDigit(n / 10);
}