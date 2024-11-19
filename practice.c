#include <stdio.h>
// code to print last 2 digits of users phone number 
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

// code 4 calculator


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



    //code 5
        // int i, j, a, n, number[30];
        // printf("Enter the value of N ");
        // scanf("%d", &n);
 
        // printf("Enter the numbers ");
        // for (i = 0; i < n; ++i)
        //     scanf("%d", &number[i]);
 
        // for (i = 0; i < n; ++i) 
        // {
 
        //     for (j = i + 1; j < n; ++j)
        //     {
 
        //         if (number[i] > number[j]) 
        //         {
 
        //             a =  number[i];
        //             number[i] = number[j];
        //             number[j] = a;
        //         }
        //     }
        // }
 
        // printf("The numbers arranged in ascending order are given below \n");
        // for (i = 0; i < n; ++i)
        //     printf("%d\n", number[i]);
 
   // }
    

   
//     int numbers[10], sum = 0;
//     printf("Enter the numbers: ");
    
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &numbers[i]);
//     }
    
//     for (int i = 0; i < 10; i++) {
//         if (numbers[i] % 2 == 0) {
//             sum += numbers[i];
//         }
//     }
    
//     printf("Sum of even numbers is: %d\n", sum);
    
//     return 0;

// }

//code 2 sum of even numbers 
//     int numbers[10], sum = 0;

    
//     printf("Enter the numbers: ");
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &numbers[i]);
//     }

 
//     for (int i = 0; i < 10; i++) {
//         if (numbers[i] % 2 == 0) {  
//             sum += numbers[i];      
//         }
//     }
//     printf("Sum of even numbers is: %d\n", sum);

//     return 0;
// }

//code 3


//     int n;

//     // Input: Read the number of elements
//     printf("Input the number of elements to store in the array: ");
//     scanf("%d", &n);

//     int numbers[n];

//     // Input: Read 'n' elements into the array
//     printf("Input %d number of elements in the array:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("element - %d: ", i);
//         scanf("%d", &numbers[i]);
//     }

//     // Output: Display the values stored in the array
//     printf("The values stored into the array are: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", numbers[i]);
//     }

//     // Output: Display the values in reverse order
//     printf("\nThe values stored into the array in reverse are: ");
//     for (int i = n - 1; i >= 0; i--) {
//         printf("%d ", numbers[i]);
//     }

//     return 0;
// }

//code 4

//     int A[3][3] = {
//         {4, 6, 9},
//         {2, 5, 8},
//         {1, 3, 7}
//     };

//     int sum1 = 0, sum2 = 0;

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if ((i + j) % 2 == 0) {
//                 sum1 += A[i][j];
//             } else {
//                 sum2 += A[i][j];
//             }
//         }
//     }

//     printf("Sum of  elements 1: %d\n", sum1);
//     printf("Sum of  elements 2: %d\n", sum2);

//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------

//7) code 1


// #include <string.h>
// #define ALPHABET_SIZE 26
// int isPangram(const char *sentence)
// {
//     int alphabet[ALPHABET_SIZE] = { 0 },i,index; 
// 	char ch; 
//     for (i = 0; sentence[i] != '\0'; i++) {
//         ch = sentence[i];
//         if (ch >= 'a' && ch <= 'z') {
//              index = ch - 'a';
//             alphabet[index] = 1; 
//         }
//     }
//     for (int i = 0; i < ALPHABET_SIZE; i++) {
//         if (alphabet[i] == 0) {
//             return 0; 
//         }
//     } 
// }

// int main() {
//     const char *sentence = "The quick brown fox jumps over the lazy dog";
//     if (isPangram(sentence)) {
//         printf("The sentence is a pangram.\n");
//     } else {
//         printf("The sentence is not a pangram.\n");
//     }
// }


//practice 8

//code 1

// void distribution(int A, int B){
//     int totalChoco=A+B;
//     printf("Total chocolates are %d \n",A+B);
//     if(totalChoco%2==0){
//         printf("Chocolates can be divided");
//     }else{
//         printf("Chocolates cant be divided");
//     }
// }

// int main(){
//     int A, B;
//     printf("Enter total chocolates: ");
//     scanf("%d %d",&A,&B);
//     distribution(A,B);
// }


//code 2 
// #include <stdio.h>

// void naturalNumbers(int startDigit, int endDigit) {
//     int i;
//     for(i = startDigit; i <= endDigit; i++) {
//         printf("%d ", i);
//     }
// }

// int main() {
//     int startDigit, endDigit;
//     printf("Enter the first and last number: ");
//     scanf("%d %d", &startDigit, &endDigit);
//     naturalNumbers(startDigit, endDigit);
//     return 0;
// }

//code 3



// int getLength(char *str) {
//     int length = 0;
//     while (*str != '\0') {
//         length++;
//         str++;
//     }
//     return length;
// }

// int main() {
//     char input[100];
//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     int length = getLength(input);
//     printf("The length of the input string is: %d\n", length);

//     return 0;
// }
