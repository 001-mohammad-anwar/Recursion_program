#include <iostream>
using namespace std;
void Squre(int);
void reverse(int);

int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    reverse(num);
    return 0;
}

void reverse(int num)
{
    int r, sum = 0;
    if (num > 0)
    {
        r = num % 10;
        sum = sum * 10 + r;
        cout<<sum;
    }
    reverse(num / 10);
}