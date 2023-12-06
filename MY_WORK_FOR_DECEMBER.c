int is_a_leap_year(int year){
    if(year % 400 == 0 || year % 4 ==0 && year % 100 != 0){
        return 1;
    } 
        return 0; 
}


int main(){
    int day,month,year;
    int remaining_days = 0;
    int days_of_each_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("enter the date you want in this format DD MM YYYY: ");
    scanf("%d %d %d",&day,&month,&year);


    if(day > 25 && month == 12){
    if(is_a_leap_year(year)){
        days_of_each_month[1] = 29;
    }
     remaining_days = remaining_days + (days_of_each_month[11] - day);
    for(int i = 0;i < 12;i++){
    remaining_days = remaining_days + days_of_each_month[i];
    }
     remaining_days = remaining_days + 25;
     printf("days left for christmas are: %d DAYS",remaining_days);
    } 
    
    else if(day == 25 && month == 12){
        printf("Merry Christmas NYSD Derek The Boss");
    }

    else{
    if(is_a_leap_year(year)){
        days_of_each_month[1] = 29;
    }
    remaining_days = remaining_days + (days_of_each_month[month -1] - day);
    for(int i = month;i < 12;i++){
    remaining_days = remaining_days + days_of_each_month[i];
    }
remaining_days = remaining_days -(days_of_each_month[11] - 25);
printf("days left for christmas are: %d DAYS",remaining_days);
    }


return 0;
}