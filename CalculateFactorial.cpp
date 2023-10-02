#include<iostream>
using namespace std;
int fact(int);
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<fact(num)<<endl;
}

int fact(int n){
    if (n==0) return 1; //base case
    return n * fact(n-1);
    
}