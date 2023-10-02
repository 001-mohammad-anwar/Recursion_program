#include <iostream>
using namespace std;
void OddNatural(int);
int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    OddNatural(num * 2); // does not change actual value of num
    // cout<<num;
    return 0;
}

void OddNatural(int numb)
{
    // if (numb > 0)
    // {
    //     OddNatural(numb - 1);            //This Logic give us Odd natural number
    //     if (numb % 2 != 0)
    //         cout << numb << " ";
    // }

    // if (numb > 0)
    // {
    //     OddNatural(numb - 1);
    //     if (numb % 2 == 0)               //This Logic give us even natural number
    //         cout << numb << " ";
    // }

    if (numb > 0)
    {
        if (numb % 2 == 0)                  // This Logic give us even natural number
            cout << numb << " ";
        OddNatural(numb - 1);
    }

    //  if (numb > 0)
    // {
    //     if (numb % 2 != 0)
    //         cout << numb << " ";         //This Logic give us odd natural number in reverse order
    //     OddNatural(numb - 1);

    //     }
}