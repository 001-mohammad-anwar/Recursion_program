#include<iostream>
using namespace std;
int squre(int );
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    int k = squre(x);
    cout<<k;
    return 0;
}

int squre(int num){
    
    if(num==0)
       return 0;
       
    return (num*num+squre(num-1));
   
     
    
}