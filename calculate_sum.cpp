#include <iostream>
using namespace std;
int sum(int);
int main()
{
    int num;
    cout << "Enter a number";
    cin >> num;
    int k = sum(num);
    cout << k << " ";
    return 0;
}
int sum(int num)
{
    if (num == 0)
        return 0;
    return num + sum(num-1);
}