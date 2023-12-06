#include<stdio.h>
int product();
int main(){
    int number,result;
    printf("enter a number: ");
    scanf("%d",&number);
    result = product(number);
    printf("factorial = %d",result);
return 0;
}
int product(int number){
if(number != 1){
    return number * product(number - 1);
}
else{
    return number;
}
}