#include<stdio.h>
typedef struct {
    double real;
    double imagine;
}complex;
int main(){
    complex c1 = {.real = 31, .imagine = 21};
    complex c2 = {.real = 45, .imagine = 9'x7};
    complex c3 = {.real = 32, .imagine = 61};
    complex sum;
    sum.real =  c1.real + c2.real +  c3.real ;
   sum.imagine = c1.imagine + c2.imagine +  c3.imagine;
    printf("the sum of thi
}  