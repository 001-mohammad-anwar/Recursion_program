#include <iostream>
using namespace std;
int Power(int, int);

int main()
{
    int b, p;
    cout << "Enter the  base value :";
    cin >> b;
    cout << "enter the power:";
    cin >> p;
    cout << Power(b, p) << " ";
    return 0;
}

int Power(int b, int p)
{
    if (p == 0)
        return 1;
    return b * Power(b, p-1);
}