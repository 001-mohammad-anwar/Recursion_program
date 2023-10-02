#include<iostream>
using namespace std;
int DigitSum(int);
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<DigitSum(num)<<endl;
}

int DigitSum(int x){
    if(x==0)
        return 0;
    int r = x%10;
    return (r+DigitSum((x/10)));
}