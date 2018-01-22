#include <stdio.h>
int main()
{
    int day ,hour, min;
    printf("Enter computer working time: ");
    scanf("%d", &min);
    day = min/1440;
    hour = (min-(day*1440))/60;
    min = (min-(day*1440))-(hour*60);
    printf("It is %d days %d hours and %d minutes.",day,hour,min);
}
