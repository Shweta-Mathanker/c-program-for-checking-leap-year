#include<stdio.h>
int main(){
    int y;
    printf("enter year");
    scanf("%i",&y);
    if(y%400==0 &&y%4==0)
    {
        printf("leap year");

    }
    else if(y%100==0)
    {
        printf("not leap year");
    }
    else{
        printf("not leap year");  //ex:1890
    }
    return 0;
}