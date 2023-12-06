#include<stdio.h>
void is_prime(int number){
int test = 2;
while(test <= number/2){
if (number % test == 0){
return;
}
test = test + 1;
}
   printf(" %d ",number);
}
int main(){
int highest_number;
int lowwest_number;

printf("enter the highest value: ");
scanf("%d",&highest_number);
printf("enter the lowwest value: ");
scanf("%d",&lowwest_number);

for(int i = lowwest_number; i<=highest_number ; i++){

    is_prime(i);

}

    return 0;
}