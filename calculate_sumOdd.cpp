#include <iostream>
using namespace std;
int Oddsum(int);
int main()
{
    int num;
    cout << "Enter a number:"<<endl;
    cin >> num;
    int k = Oddsum(num);
    cout<<k<<endl;
    return 0;
}
int Oddsum(int n)
{
    if (n <= 0)
        return 0;
    return 2*n-1 + Oddsum(n-1);
    
}