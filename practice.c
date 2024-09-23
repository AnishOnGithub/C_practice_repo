#include <stdio.h>
// code to print last 2 digits of users phone number 
int main() {
    // int num,lastDigits;
    // printf("Enter the number: ");
    // scanf("%d",&num);

    // lastDigits=num/100;

    // printf("the last 2 digits of the number are  %d ",lastDigits);



//code to print complement of a given number 

// int num,numComplement;
// printf("enter the number: ");
// scanf("%d",&num);
// numComplement=~num;
// printf("%d",numComplement);

//code to print the greatest number using ternary operators

// int a,b,c,greatestNum;
// printf("Enter a,b,c: ");
// scanf("%d%d%d",&a,&b,&c);
// greatestNum=(a>b)?((a>c)?a:c):((b>c)?b:c);
// printf("%d",greatestNum);

//code to convert the given values into ocal and hexadecimal form

int a,octal,hexa;
printf("Enter a number: ");
scanf("%d",&a);
printf("\n\nthe octal value for %d is %o",a,a);
printf("\nthe hexadecimal value for %d is %x",a,a);

// area of circle
float a,area;
printf("enter the radius: ");
scanf("%f",&a);
area=3.14*a*a;
printf("area of the circle of the radius %f is %f ",a,area);


} 
