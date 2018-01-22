#include <stdio.h>
int main()
{
    float gpa, credit, thiscredit, should, need;
    printf("Input the previous semester GPA: ");
    scanf("%f", &gpa);
    printf("Input the previous credits: ");
    scanf("%f", &credit);
    printf("Input the credits this semester: ");
    scanf("%f", &thiscredit);
    printf("Input the required GPA: ");
    scanf("%f", &need);
    should = ((need*(credit+thiscredit))-(gpa*credit))/thiscredit;
    printf("The GPA this semester should be %.2f",should);
}
