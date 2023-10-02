#include <iostream>
using namespace std;
// void sumOdd(int n,int &sum)
// {
//   if(n <= 0)
//     return;
// if(n%2 != 0)
//     sum += n;
// sumOdd(n-1,sum);
  
// }
int t(int n)
{
    if(n <= 0)
        return 0;
    if(n%2  != 0)
        return n + t(n-2);
    else   
        return t(n-1);
}
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    cout << "mohammad anwar";
    // int sum =0;
    cout<<t(num*2)<<endl;
    return 0;
}

