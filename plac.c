#include<stdio.h>
#include<stdarg.h>
void fun (char *msg, ...);
    int main(){
        fun("IndiaBIX" , 9,5,7,11,0);
        return 0;
    }

    void fun(char *msg, ...){
        va_list ptr;
        int num;
        // va_start(ptr, msg);
        num = va_arg(ptr , int);
        printf("%d", num);
        num = va_arg(ptr, int);
        printf("%d", num);
    }
