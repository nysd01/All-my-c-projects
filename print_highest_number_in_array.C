#include<stdio.h>
int main(){
    int nysd[] = {2,4,6,8,10,12};
    int highest = *nysd;
    for(int i = 0; i <= 5; i++)
    {
        if(highest < nysd[i])
        {
            highest = *(nysd + i);
        }
       else
        {
         highest = highest;
        }
    }
   printf("%d",highest);
}