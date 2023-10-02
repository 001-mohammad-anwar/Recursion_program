#include <iostream>
using namespace std;
void fact(int);
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    fact(num);
    return 0;
}

void fact(int n)
{  
   
    if(n>0){
         cout << n << " ";
       fact(n - 1);
    }
    // if(n==1){
    //     cout<<"1"<<" ";
    // }
    // else{
    //     fact(n-1);
    //     cout<<n<<" ";
    // }
}
