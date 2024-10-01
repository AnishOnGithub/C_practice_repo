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

// int a,b,c,surfaceArea;
// printf("enter the length of the cuboid: ");
// scanf("%d",&a);
// printf("enter the width of the cuboid: ");
// scanf("%d",&b);
// printf("enter the height of the cuboid: ");
// scanf("%d",&c);

// surfaceArea=2*a*b+2*a*c+2*c*b;
// printf("The surface area for the cuboid is %d",surfaceArea);

//code to get average of marks of user using far loop 

// int i,numSubjects,averageMarks,total=0,marks;

// printf("Enter the number of subjects: ");
// scanf("%d",&numSubjects);

// for(i=0;i<numSubjects;i++){
//     printf("Enter the marks for subject %d: ", i + 1);

//     scanf("%d",&marks);
//     total+=marks;
//     }
// printf("Total Marks: %d\n", total);
// averageMarks=total/numSubjects;
// printf("%d",averageMarks);

// int a=456;
// int a=444;
// printf(a);


// { int n=7,p; p=n++;
// printf("p=%d n=%d\n"
// ,p,n);
// p=++n;
// printf("p=%d n=%d\n"
// ,p,n);
// printf("%d %d %d\n"
// ,n++,n++,n++);
// printf("%d %d %d\n"
// ,++p,++p,++p);
// }


//4
//code for num table 

//  int n;

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
        
//         for (int j = 1; j <= 3; j++) {
//             printf("%d * %d = %d\n", i, j, i * j);
//         }
//         printf("\n");
//     }

//code 2 to print even numbers

    // for (int i = 1; i <= 50; i++) {
    //     if (i % 2 != 0 || i % 5 == 0) {
    //         continue;
    //     }
    //     printf("%d\n", i);



//code 3 month and season
//  int m;

//     printf("Enter month number (1-12): ");
//     scanf("%d", &m);

//     if (m < 1 || m > 12) {
//         printf("Error: Invalid month\n");
//     } else {
//         switch(m) {
//             case 1:  printf("January - Winter\n"); break;
//             case 2:  printf("February - Winter\n"); break;
//             case 3:  printf("March - Spring\n"); break;
//             case 4:  printf("April - Spring\n"); break;
//             case 5:  printf("May - Spring\n"); break;
//             case 6:  printf("June - Summer\n"); break;
//             case 7:  printf("July - Summer\n"); break;
//             case 8:  printf("August - Summer\n"); break;
//             case 9:  printf("September - Autumn\n"); break;
//             case 10: printf("October - Autumn\n"); break;
//             case 11: printf("November - Autumn\n"); break;
//             case 12: printf("December - Winter\n"); break;
//         }
//     }

//code 4 calculator


    // float num1, num2;
    // int choice;

    // printf("Enter two numbers: ");
    // scanf("%f %f", &num1, &num2);

    // printf("Select an operation:\n");
    // printf("1. Addition\n");
    // printf("2. Subtraction\n");
    // printf("3. Multiplication\n");
    // printf("4. Division\n");
    // printf("Enter your choice (1-4): ");
    // scanf("%d", &choice);

    // switch (choice) {
    //     case 1:
    //         printf("Result: %.3f\n", num1 + num2);
    //         break;
    //     case 2:
    //         printf("Result: %.3f\n", num1 - num2);
    //         break;
    //     case 3:
    //         printf("Result: %.3f\n", num1 * num2);
    //         break;
    //     case 4:
    //         if (num2 != 0)
    //             printf("Result: %.3f\n", num1 / num2);
    //         else
    //             printf("Error: Division by zero\n");
    //         break;
    //     default:
    //         printf("Error: Invalid choice\n");
    // }


  
   
   
   

}  
