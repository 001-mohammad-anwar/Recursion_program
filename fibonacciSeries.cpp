#include <iostream>
using namespace std;
int fib(int);
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << fib(i)<<" ";
    }

    return 0;
}

int fib(int n)
{
    if (n == 1 || n==2)
         return 1;
    return fib(n - 1) + fib(n - 2);
}
