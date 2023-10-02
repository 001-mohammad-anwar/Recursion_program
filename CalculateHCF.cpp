#include <iostream>
using namespace std;

int HCF(int, int);
int main()
{
    int a, b;
    cout << "Enter a number :";
    cin >> a >> b;
    cout << HCF(a, b) << endl;
    return 0;
}

int HCF(int a, int b) {
if (b == 0)
return a;
return HCF(b, a % b);
}
    