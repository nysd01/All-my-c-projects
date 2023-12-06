#include<stdio.h>
#include<string.h>
#define N 100
int main(){
    char str1[N],str2[N];
    printf("enter first string:",str1);
    fgets(str1,sizeof(str1),stdin);
     printf("enter second string:  ",str2);
    fgets(str2,sizeof(str2),stdin);
    int len1 = strlen(str1)-1;
     int len2 = strlen(str2)-1;
      printf("%d\n",len1);
       printf("%d\n",len2);
if(len1 > len2){
    printf("%s",str1);
}
else{
    printf("%s",str2);
}
}
