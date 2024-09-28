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

// int a,octal,hexa;
// printf("Enter a number: ");
// scanf("%d",&a);
// printf("\n\nthe octal value for %d is %o",a,a);
// printf("\nthe hexadecimal value for %d is %x",a,a);

// area of circle
// float a,area;
// printf("enter the radius: ");
// scanf("%f",&a);
// area=3.14*a*a;
// printf("area of the circle of the radius %f is %f ",a,area);

// area of triangle 
// float height, base, area;
// printf("enter height : ");
// scanf("%f",&height);

// printf("enter base: ");
// scanf("%f",&base);

// area= (0.5* base * height);
// printf("the area of the circle is: %f",area);


//for loop

//print nummber from 1 to 10

// for (int i=0;i<=10;i++){
// printf("%d\n",i);
// }

//print a to z

// for(char ch='a'; ch<='z';ch++){
// printf("%c\n",ch);
//  }
// return 0;


//while loop

// int n;
// printf("Enter any number: ");
// scanf("%d",&n);

// int i=0;
// while(i<=n){
//     printf("%d",i);
//     i++;
// }


    // float celsius, fahrenheit;

    // // Input temperature in Celsius
    // printf("Enter temperature in Celsius: ");
    // scanf("%f", &celsius);

    // // Convert Celsius to Fahrenheit
    // fahrenheit = (celsius * 9 / 5) + 32;

    // // Output the result
    // printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    //code to ceck if the input number is odd or even

    // int a;
    // printf("Enter the number: ");
    // scanf("%d",&a);
   
    // if(a%2==0){
    //     printf("The number is even");
    // }
    // else{
    //     printf("the number is odd");
    // }

    //code to check if the number is odd or even
     
   //   int a;
   //   printf("Enter the number: ");
   //   scanf("%d",&a);
   //   if(a>0){
   //      printf("The number is positive");
   //   }
   //   else if(a<0){
   //      printf("The given number is negetive ");
   //   }
   //   else
   //   printf("The number is neutral");

//    static int i=5;
// if (i--)
// {
// printf("%d ",i);
// main();
// }
// return (0);

//code to find out surface area of a cuboid

int a,b,c,surfaceArea;
printf("enter the length of the cuboid: ");
scanf("%d",&a);
printf("enter the width of the cuboid: ");
scanf("%d",&b);
printf("enter the height of the cuboid: ");
scanf("%d",&c);

surfaceArea=2*a*b+2*a*c+2*c*b;
printf("The surface area for the cuboid is %d",surfaceArea);



}  
