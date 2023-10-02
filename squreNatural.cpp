#include<iostream>
using namespace std;
void Squre(int);

int main(){
    int num ;
    cout<<"Enter a number :";
    cin>>num;
    Squre(num);
    return 0;

}

void Squre(int num){
    if(num>0){
        cout<< num*num <<" ";
        Squre(num-1);
    }
}