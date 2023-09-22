// #include <stdio.h>

// int main(){
//   int myNum = 15;
//   char myChar = 'D';

//   printf("My number %i  is \n", myNum);
//   printf("%c this is my letter" , myChar);

//   re

// }



// #include <stdio.h>

// int main() {
//   // Student data
//   int studentID = 15;
//   int studentAge = 23;
//   float studentFee = 75.25;
//   char studentGrade = 'B';

//   // Print variables
//   printf("Student id: %d\n", studentID);
//   printf("Student age: %d\n", studentAge);
//   printf("Student fee: %f\n", studentFee);
//   printf("Student grade: %c", studentGrade);

//   return 0;
// }




// C CONSANTS:

/*C constant ko program ma is lia istamal kia jata ha taky is ki Value hamsha contant yani ka ak hi arhy.
Isko program ma define karna ka lia (const) without brakets istamal kiya jata ha agar hm kisi constant 
varible ki value ko (const int myNum= 15;) rakhny ka bad (myNum= 10;) 
rakh dain to reult ma hamin error mily ga iski exapmle nichy ha*/

// FOR EXAPMLE:
// #include <stdio.h>

// int main() {
//   const int myNum = 15;
//   myNum = 10;
  
//   printf("%d", myNum);
//   return 0;
// }

/*Jasa ka hamin is Example sa pata chal chuka ha ka hmara code m error ha*/

/*IMP Note: 
This contant variablr is basically used for constant values such as (cont int minutesPerhour= 60;) 
This is just a quick example but you can use it for constant values in program because you never  need to change values in fuction */
// For Example 
// #include <stdio.h>

// int main(){
//     const int minutesPerhour = 14;
//     const float P1 = 3.9;

//     printf("%d\n", minutesPerhour);
//     printf("%f\n", P1);
//     return 0;
// }
/*As you can see know our answer is correct*/
/*One more Example for Declare Varibles of constant in the below example you can't use this type of data in your program to deaclare variables*/
// #include <stdio.h>

// int main() {
//   const int minutesPerHour;
//   minutesPerHour = 60;
  
//   printf("%d", minutesPerHour);
//   return 0;
// }

/*Again you get error in results And you just need to declare varible as a single of simple words such as 
(cont int minutesPerhour= 60;), You can also use Upper case during declaration of a varible such as 
(cont int MINUTEDPERHOUR=60;)*/







//C OPERATORS:
/*Operators are yused to perform the opperation of variables and values such (+)for taking sum of given values and (+) is an operator */

//For Exxample:
// #include <stdio.h>

// int main (){
//     int Sum = 100 + 50;

//     printf ("%d", Sum);
//     return 0;
// }

/*Yes the Answer is 150 but in this example we just try two values that added together And now we try to add values and varibles or another varible */
// For Example;
// #include <stdio.h>

// int main() {
//   int sum1 = 100 + 50;        // 150 (100 + 50)
//   int sum2 = sum1 + 250;      // 400 (150 + 250)
//   int sum3 = sum1 + sum2;     // 800 (159 + 400)
  
//   printf("%d\n", sum1);
//   printf("%d\n", sum2);
//   printf("%d\n", sum3);
//   return 0;
// }

/*As you can see the perfect result will ve showing in our terminals*/

/*Now we are going to the classification of operators
C divides operators in following groups;
. Arithmetic operators
. Assignment Operators
. Comparison Operators
. Logical Operators
. Bitwise Operators*/


// Arithmetic Operators
/*It is used to perform simple mathamtical opperation such as 
Symbols        Name           Fuction                                  Exapmle
  +          Addition       Adds Two Values Together                     x + y
  -          Substract      Substract One Value To Another               x - y
  /          Division       Divide one value to another                  x / y
  *          Multiply       Multiply One value to Another                x * y
  %          modulus        Returns The Division Reminder                x % y
  ++         Increasment    To increase the value of varible by 1         ++x
  --         Decreasment    To decrease the value of varible by 1         --x
*/

// Assignment Operators
/*Assignment Operators is used to assing value of varible (=) equal Sign is used in this process, 
The below Example is clarify the fuction of assignment operators.

// For Emaple 
#include <stdio.h>

int main (){
  int x = 10;

  printf("%d" , x);
  return 0;
}
As the above Example we assing a value to x that is equal(=) to 10*/

// Assignment Operators
/*In Other case of assignment operators, We use it to add value in vafrible the sign mostly use in it is(+=) */
// FOr Example
/*
#include <stdio.h>

int main () {
  int x = 10;
  x += 5;

  printf ("%d", x);
  return  0;
}
*/
/*As you can see Our answer is 15 due to the help of (+=) this situation
There is also a list of all assingment operators:
Operators           Example             Same As
   =                 x = 3               x = 5
   +=                x += 3              x = x + 3
   -=                x -= 3              x = x - 3
   /=                x /= 3              x = x / 3
   *=                x *= 3              x = x * 3
   %=                x %= 3              x = x % 3
   &=                x &= 3              x = x & 3
   |=                x |= 3              x = x | 3
   ^=                x ^= 3              x = x ^ 3
   <<=               x <<= 3             x = x << 3
   >>=               x >>= 3             x >>= 3
*/

// Comparison Operators
/*Comparison Operators are used to  comapare two values or variable. 
By the help of this operator it will help us to find answer and take decision.*/

/*The return value of coparsion is either 0 and 1 which means true and false 
In this 1 means true and 0 means false. These values are known as boolean values. 
We will learn abput Boolean values in this next chapter. In the follwing example we try greater than > to find out 5 is greater than 3*/
// For Example
/*
#include <stdio.h>

int main () {
  int x = 5;
  int y = 3;

  printf ("%d", x > y);
  return 0;
}
*/
/*So that our answer is 1 which means our answer is true*/




// #include <stdio.h>
// #include <string.h>

// int main (){
//   char myname[] = "MUHAMMADMUSTAFA";

//   printf ("Lenght of: %d\n" , strlen(myname));
//   printf ("Size of: %d\n" , sizeof(myname));
//   return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main (){
//   char myname[50] = "MUHAMMADMUSTAFA";

//   printf ("Lenght of: %d\n" , strlen(myname));
//   printf ("Size of: %d\n" , sizeof(myname));
//   return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main () {
//   char str1 [20] = "Muhammd\t";
//   char str2 [] = "Mustafa";

//   strcat(str1 ,str2);

//   printf("%s" , str1);

//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main () {
//   char str1 [20] = "Muhammad\tMustafa";
//   char str2 [20];

//   strcpy(str2 , str1);
//   printf("%d" , str2);
//   return 0; 
// }

// #include <stdio.h>
// #include <string.h>

// int main () {
//   char str1 [] = "Hello";
//   char str2 [] = "Hello";
//   char str3 [] = "hi";

//   printf("%d\n" , strcmp(str1 , str2));
//   printf("%d\n" , strcmp(str2, str3));

//   return 0;
// }

// #include <stdio.h>

// int main (){
//   int myNum;
//   printf("Type a number and press: ");

//   scanf("%d", &myNum);

//   printf("Your Number is : %d", myNum);
  
//   return 0;
// }

// #include <stdio.h>

// int main () {
//   int myNum;
//   char myChar;

//   printf ("Type A Number and A Character and Press Enter: ");
//   scanf ("%d %c" , &myNum, &myChar);

//   printf("Your Number is: %d\n" ,myNum);
//   printf("Your Character is: %c\n" , myChar);

//   return 0;
// }


// # include <stdio.h>

// int main (){
//   char firstname[30];

//   printf("Enter Your Firest name: \n");

//   scanf("%s" , firstname);

//   printf("Hello %s", firstname);

//   return 0;
// }

// #include <stdio.h>

// int main () {

//   char fullname [30];

//   printf("Enter your Full Nmae: \n");

//   fgets( fullname , sizeof(fullname), stdin);

//   printf("Hello %s", fullname);

//   return 0;
// }

// #include <stdio.h>

// int main (){
//   char Char1 = 'M';
//   char Char2 = 'U';
//   char Char3 = 'H';
//   char Char4 = 'A';
//   char Char5 = 'M';
//   char Char6 = 'M';
//   char Char7 = 'A';
//   char Char8 = 'D';
//   char Char9 = 'M';
//   char Char10 = 'U';
//   char Char11 = 'S';
//   char Char12 = 'T';
//   char Char13 = 'A';
//   char Char14 = 'F';
//   char Char15 = 'A';

//   printf("%c", Char1);
//   printf("%c", Char2);
//   printf("%c", Char3);
//   printf("%c", Char4);
//   printf("%c", Char5);
//   printf("%c", Char6);
//   printf("%c", Char7);
//   printf("%c\t", Char8);
//   printf("%c", Char9);
//   printf("%c", Char10);
//   printf("%c", Char11);
//   printf("%c", Char12);
//   printf("%c", Char13);
//   printf("%c", Char14);
//   printf("%c", Char15);

//   return 0;

// }

// #include <stdio.h>

// int main (){
//   char Char1 = 'M';
//   char Char2 = 'U';
//   char Char3 = 'H';
//   char Char4 = 'A';
//   char Char5 = 'M';
//   char Char6 = 'M';
//   char Char7 = 'A';
//   char Char8 = 'D';
//   char Char9 = 'M';
//   char Char10 = 'U';
//   char Char11 = 'S';
//   char Char12 = 'T';
//   char Char13 = 'A';
//   char Char14 = 'F';
//   char Char15 = 'A';

//   printf("%c\t", Char1, Char2, Char3);

//   return 0;
// }



// #include <stdio.h>

// int main () {
//   int myAge = 23;

//   printf("%p" , &myAge);
//   return 0;
// }

// #include <stdio.h>

// int main (){
//   int myAge = 23;

//   printf ("%d\n" , myAge);
//   printf ("%p" , &myAge);
//   return 0;
// }


// #include <stdio.h>

// int main () {
//   int myAge = 23;
//   int* ptr = &myAge;

//   printf("%d\t", myAge);
//   printf("%p\t" , &myAge);
//   printf ("%p\t" , ptr);
//   return 0;
// }

// #include <stdio.h>;

// int main() {
//   int my_Age = 23;
//   int *ptr = &my_Age;

//   printf("%p\n" , ptr);
//   printf("%d\n" , *ptr);
//   return 0;
// }


// #include <stdio.h>

// int main (){
//   int x = 5;
//   int y = 5;
//   int z = 5;
//   int sum = x + y + z;

//   printf ("%d" , sum);
//   return 0;

// }


// #include <stdio.h>

// int main (){
//   int x = 5, y = 6, z = 3;

//   printf ("%d" , x + y + z );
//   return 0;

// }

// #include <stdio.h>

// int main () {
//   int myNumbes[4] = {2, 4, 5, 6};
//   int i;

//   for (i = 0 ; i < 4 ; i++){
//   printf("%d\n" , myNumbes[i]);
//   }
//   return 0;
// }

// #include <stdio.h>

// int main () {
//   int myNumbers[4] = {2,3,4,5};
//   int i;
//   for(i=0; i < 4; i++){
//     printf("%p\n" , &myNumbers[i]);

//   }
//   return 0;

//   }

// #include <stdio.h>

// int main() {
//   int myInt;

//   printf("%lu" , sizeof(myInt));
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int myNumers[4] = {20,30,40,50};

//   printf("%lu", sizeof(myNumers) );
//   return 0;
// }

// 

// #include <stdio.h>

// int main() {
//   int mynumbers [4] = {23, 45, 67, 89};

//   printf("%p\n", mynumbers);
//   printf ("%p\n", mynumbers[3]);
//   return 0;

// }

// #include <stdio.h>

// int main () {
//   int myNumbers [6] ={2,3,4,5,6,7};

//   printf ("%d\n", *myNumbers);
//   return 0;

// }

// #include <stdio.h>

// int main () {
//   int myNumbers [4] = {2,3,4,5};

//   printf("%d\n" , *(myNumbers+1));
//   printf("%d\n" , *(myNumbers +2));
//   printf("%d\n" , *(myNumbers +3));
//   printf("%d\n" , *(myNumbers +0));
//   return 0;

// }

// #include <stdio.h>
// int main (){
//   int myNumbers [6] = {1,2,3,4,5,6};
//   int* ptr = myNumbers;
//   int i;

//   for(i = 0; i < 6; i++){
//   printf("%d\n" , *(ptr + i));
//   }
// return 0;
// }


// #include <stdio.h>

// int main () {
//   int mynumbers[4] = {2,3,4,5};
//   *mynumbers = 23;
//   *(mynumbers + 1) = 34;

//   printf("%d\n" , *mynumbers);
//   printf("%d\n" , *(mynumbers + 1));
//   return 0;
// }


// #include <stdio.h>

// void myfuction() {
//   printf ("hello World");

// }
// int main (){
//   myfuction();
//   return 0;
// }

// #include <stdio.h>

// void myfuction() {
//   printf ("hello world\n");

// }
// int main ()  {
//   myfuction();
//   myfuction();
//   myfuction();
//   myfuction();
//   myfuction();
//   myfuction();
//   return 0;
// }


// #include <stdio.h>
// void mynames(char names []) {
//   printf ("Hello %s\n" ,names);
// }
// int main () {
//   mynames("Musa");
//   mynames("Bhatti");
//   mynames("Mustafa");
//   mynames("Anwar");

//   return 0;
// }

// #include <stdio.h>

// void myfunction (char name[], int age){
//   printf("Hello %s. Your are %d Years Old.\n", name , age);
// }

// int main () {
//   myfunction("Musa", 13);
//   myfunction("Mustafa", 26);
//   myfunction("Anwar", 34);
//   return 0;
// }

// #include <stdio.h>

// void myFunction(char name[], int age) {
//   printf("Hello %s. You are %d years old\n", name, age);
// }

// int main() {
//   myFunction("Liam", 3);
//   myFunction("Jenny", 14);
//   myFunction("Anja", 30);
//   return 0;
// }

// #include <stdio.h>

// void myfuction (int myNumbers[5])
// {
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d\n", myNumbers[i]);
//   }
// } 
// int main (){
//   int myNumbers[5] = {23,34,56,67,78};
//   myfuction(myNumbers);
//   return 0;
// }

// #include <stdio.h>

// int myfunction (int x){
//   return 5 + x;
// }

// int main() {
//   printf("Result is %d", myfunction(3));
//   return 0;
// }

// #include <stdio.h>

// int myfuction (int x, int y){
//   return x + y;

// }
// int main () {
//   printf ("Your Output is :%d" , myfuction(5 , 5));
//   return 0;
// }

// #include <stdio.h>

// int myfunction (int x, int y){
//    return x + y;
// }
// int main() {
//   int result = myfunction(5 , 6);
//   printf("Now Your Output is :%d" , result);
//   return 0;
// }

// #include <stdio.h>

// int myfunction(int , int);

// int main(){
//   int result = myfunction(5, 4);
//   printf ("Your Result is :%d", result);
//   return 0;
// }

// int myfunction(int x, int y){
//   return x + y;
// }

// #include <stdio.h>

// int sum(int x);

// int main(){
//   int result = sum(10);
//   printf ("%d", result);
//   return 0;

// }

// int sum(int x){
//   if (x > 0){
//     return x + sum(x - 1);
    
//   }else{
//     // printf("value of X is lees than 0 ");
//     return 0;
//   }
// }

// 10 + sum(9)
// 10 + ( 9 + sum(8) )
// 10 + ( 9 + ( 8 + sum(7) ) )
// ...
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0

// #include <stdio.h>

// int main() {
//   FILE *fptr;

//   // Create a file on your computer (filename.txt)
//   fptr = fopen("filename.txt", "w");

//   fprint (fptr, "Some Thing text")

//   // Close the file
//   fclose(fptr);

//   return 0;
// }
// #include <stdio.h>

// int main(){
// FILE *fptr;

// fptr = fopen("filename.txt" , "w");

// fprintf(fptr, "\nHello World!");
// fclose(fptr);
// return 0;
// }

// #include <stdio.h>

// int main(){
// FILE *fptr;

// fptr = fopen("filename.txt" , "a");

// fprintf(fptr, "\nHello World!");
// fclose(fptr);
// return 0;
// }

// #include <stdio.h>

// int main(){
// FILE *fptr;

// fptr = fopen("filename.txt" , "r");

// fprintf(fptr, "\nHello World!");
// fclose(fptr);
// return 0;
// }

// #include <stdio.h>

// int main() {
//   FILE *fptr;

//   fptr = fopen ("filename.txt", "r");
//   char mystrinng[100];

//   fgets(mystrinng, 100, fptr);
//   printf("%s", mystrinng);
//   fclose(fptr);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   FILE *fptr;
//   fptr = fopen("filename.txt" , "r");
  
//   char myString [1000];
//   while (fgets(myString,1000,fptr))
//   {
//     printf("%s" , myString);
//   }
//   fclose(fptr);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   FILE *fptr;

//   // Open a file in read mode
//   fptr = fopen("filename.txt", "r");

//   // Store the content of the file
//   char myString[100];

//   // Read the content and print it
//   while(fgets(myString, 100, fptr)) {
//     printf("%s", myString);
//   }

//   // Close the file
//   fclose(fptr);

//   return 0;
// }


// #include <stdio.h>

// int main(){
//   FILE *fptr;

//   fptr = fopen ("filename.txt" , "r");

//   char mystring [100];
//   if (fptr != NULL)
//   {
//     while(fgets(mystring, 100, fptr)) {
//   printf("%s", mystring);
//     }
//   }
  
//   else{
//     printf("there is no file");
//   } 

//   fclose(fptr);

//   return 0;
// }


// #include <stdio.h>

// int main () {
//   int a;
//   int b;

//   printf("Enter 1st Number\n");
//   scanf("%d", &a);

//   printf("Enter 2nd Number\n");
//   scanf("%d", &b);
  
//   printf("The sum is %d\n" , a+b);

//   return 0;
// }



// #include <stdio.h>

// struct myStructure
// {
//   int mynumber;
//   char myCharacter;
// };

// int main (){
//   struct myStructure s1;
     
//   s1.myCharacter = 'A;
//   s1.mynumber =13;

//   printf ("Your Character is %c\n" , s1.myCharacter);
//   printf ("Your Number is %c\n" , s1.mynumber);

//   return 0;
// }




// #include <stdio.h>

// struct mystructure 
// {
//   int mynumber;
//   char mycharacter;
// };

// int main(){
//   struct mystructure s1;
//   struct mystructure s2;
//   struct mystructure s3;


//   s1.mynumber = 2;
//   s1.mycharacter ='A';

//   s2.mynumber = 13;
//   s2.mycharacter = 'A';
  
//   s3.mynumber = 12;
//   s3.mycharacter = 'a' ;

//   printf("Your First Number is %d\n" , s1.mynumber);
//   printf("Your First letter is %c\n" , s1.mycharacter);

//   printf("Your Second Number is %d\n" , s2.mynumber);
//   printf("Your Second letter is %c\n" , s2.mycharacter);

//   printf("Your Third Number is %d\n" , s3.mynumber);
//   printf("Your Third letter is %c\n" , s3.mycharacter);

//   return 0;

// }


// #include <stdio.h>
// #include <string.h>

// struct mystruct
// {
//   int myNum;
//   char myChar;
//   char myString[40];
// };

// int main() {
//   struct mystruct s1;

//   strcpy(s1.myString, "Some Text");

//   printf("Your Text is : %s\n" ,  s1.myString);

//   return 0;
// }


// #include <stdio.h>
// #include <string.h>

// struct myStruct
// {
//   int myNum;
//   char myChar;
//   char myString[30];

// };

// int main() {
//   struct myStruct s1 = {13, 'A' , "Muhammah Mustafa"};

//   printf ("Your Name is %s\n" , s1.myString);

//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct myStruct
// {
//   int myNum;
//   char myChar;
//   char myString[40];
// };
 
 
//  int main()
//  {
//   struct myStruct s1 = {12, 'A' , "Muhammad Mustafa"};
//   struct myStruct s2;
//   s2 = s1;

//   printf("Your Name is %s\n", s1.myString);
//   printf("Your Full name is %s\n" ,  s2.myString);

//   return 0;
//  }
 

// #include <stdio.h>
// #include <string.h>

// struct a {
//   int myNum;
//   char myChar;
//   char myString[30];
// };

// int main () {
//   struct a s1 ={13, 'A' , "SOME ERROR"};

//   s1.myChar = 'C';
//   s1.myNum = 20;
//   strcpy(s1.myString, "some text again");

//   printf("%c\n%d\n%s\n" , s1.myChar, s1.myNum, s1.myString);

//   return 0;

// }

// #include <stdio.h>
// #include <string.h>

// struct a {
//   int myNum;
//   char myChar;
//   char myString[30];
// };

// int main () {
//   struct a s1 ={13, 'A' , "SOME ERROR"};
//   struct a s2;
//   s2 = s1;

//   s2.myChar = 'C';
//   s2.myNum = 20;
//   strcpy(s2.myString, "some text again");

//   printf("%c\n%d\n%s\n" , s1.myChar, s1.myNum, s1.myString);
//   printf("%c\n%d\n%s\n" , s2.myChar, s2.myNum, s2.myString);

//   return 0;

// }


/*
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60

*/

// # include <stdio.h>

// int main()
// {
//   int a;
//   int b;

//   return 0;
// }

// #include <stdio.h>

// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     printf("Table of %d:\n", number);

//     for (int i = 1; i <= 10; i++) {
//         printf("%d X %d = %d\n", number, i, number * i);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//   int number;
//   printf("Enter your Number for Multiplication: ");
//   scanf("%d", &number);

//   printf("Table of %d is Bellow: \n" , number);

//   for (int i = 1; i <= 100; i++)
//   {
//     printf("%d x %d = %d \n" , number , i , number * i);

//   }
  
//   return 0;
// }


// #include <stdio.h>
// // #define PI 3.14
// /* this is a multiline comment


// this is ignored by my compiler

// */
// int main()
// {
//     int a = 8;
//     // const float b = 7.333;
//     // PI = 7.33; //cannot do this since PI is a constant
//     // printf(" tab character \t\t my backslash  %f", b);
//     // b = 7.22; //cannot do this since b is a constant
//     printf("Hello World \a" ,a );
//     // printf("The value of a is %d and the value of b is %2.4f\n", a, b);
//     // printf("%18.4f this",b);

//     return 0;
// }


// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   const a = 43;
//   int PI;

  
//   printf("%d" , a) ;
//   /* code */

//   return 0;
// }


// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//   bool True = true;
//   bool Flase= false;


//   printf("%d\n",True);
//   printf("%d", Flase);

//   return 0;
// }



// #include <stdio.h>

// int main()
// {
//   int z;
//   int x;

//   printf("Enter a Number\n");
//   scanf("%d" , &z);
//   printf("Enter a Number\n");
//   scanf("%d" , &x);

//   printf("Your sum is: %d" , z + x);

//   return 0;
// }


// #include <stdio.h>

// int main() {
//     char operator;
//     double num1, num2, result;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operator);

//     printf("Enter First Value: ");
//     scanf("%lf", &num1);

//     printf("Enter 2nd Value: ");
//     scanf("%lf", &num2);

    

//     if (operator == '+') {
//         result = num1 + num2;
//         printf("Result: %.2lf\n", result);
//     }
//     else if (operator == '-') {
//         result = num1 - num2;
//         printf("Result: %.2lf\n", result);
//     }
//     else if (operator == '*') {
//         result = num1 * num2;
//         printf("Result: %.2lf\n", result);
//     }
//     else if (operator == '/') {
//         if (num2 != 0) {
//             result = num1 / num2;
//             printf("Result: %.2lf\n", result);
//         } 
//         else {
//             printf("Error: Division by zero is not allowed.\n");
//             }
//     }

//     else {
//         printf("Error: Invalid operator entered.\n");
//     }

//   return 0;
// }


// #include <stdio.h>

// int main() {
//     // Declare variables
//     char scale;
//     double temperature, convertedTemperature;

//     // Prompt the user for input
//     printf("Enter the temperature scale (C or F): ");
//     scanf(" %c", &scale);

//     // Check if the scale is 'C' or 'F'
//     if (scale == 'C' || scale == 'c') {
//         printf("Enter the temperature in Celsius: ");
//         scanf("%lf", &temperature);

//         // Convert Celsius to Fahrenheit
//         convertedTemperature = (temperature * 9 / 5) + 32;

//         // Display the result
//         printf("Temperature in Fahrenheit: %.2lf\n", convertedTemperature);
//     } else if (scale == 'F' || scale == 'f') {
//         printf("Enter the temperature in Fahrenheit: ");
//         scanf("%lf", &temperature);

//         // Convert Fahrenheit to Celsius
//         convertedTemperature = (temperature - 32) * 5 / 9;

//         // Display the result
//         printf("Temperature in Celsius: %.2lf\n", convertedTemperature);
//     } else {
//         printf("Error: Invalid scale entered. Use 'C' or 'F'.\n");
//         return 1; // Exit with an error code
//     }

//     return 0; // Exit the program normally
// }


// #include <stdio.h>

// int main() {
//     char text[1000]; // Assuming a maximum of 1000 characters
//     int count = 0;

//     printf("Enter a sentence or paragraph: ");
//     gets(text); // Reads the input text from the user

//     // Loop through each character in the input text
//     for (int i = 0; text[i] != '\0'; i++) {
//         count++;
//     }

//     printf("Character count: %d\n", count);

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char text[1000]; // Assuming a maximum of 1000 characters

//     printf("Enter a sentence or paragraph: ");
//     fgets(text, sizeof(text), stdin); // Read input using fgets

//     // Remove the trailing newline character if it exists
//     size_t len = strlen(text);
//     if (len > 0 && text[len - 1] == '\n') {
//         text[len - 1] = '\0';
//     }

//     int count = strlen(text); // Calculate the character count

//     printf("Character count: %d\n", count);

//     return 0;
// }



// #include <stdio.h>

// int main() {
   
//     float mathScore, physicsScore, chemistryScore, ComputerScore,averageScore;
    
   
//     printf("Enter Math score: ");
//     scanf("%f", &mathScore);
    
//     printf("Enter Physics score: ");
//     scanf("%f", &physicsScore);
    
//     printf("Enter Chemistry score: ");
//     scanf("%f", &chemistryScore);

//     printf("Enter Computer score: ");
//     scanf("%f", &ComputerScore);
    
//     printf("Your Total Marks Is: %f\n" , mathScore + physicsScore + chemistryScore +ComputerScore);

   
//     averageScore = (mathScore + physicsScore + chemistryScore) / 4.0;
    
//     printf("Average score: %.2f\n", averageScore);
    

//     if (averageScore >=90)
//     {
//       printf("Grade Is: A\n ");
//     } 
//     else if (averageScore >=80)
//     {
//       printf("Grade Is: B\n");
//     }
//     else if (averageScore >=70)
//     {
//       printf("Grade Is: C\n");
//     }    
//     else if (averageScore >=60)
//     {
//       printf("Grade Is: D\n");
//     }    
//     else 
//     {
//       printf("Fail");
//     } 
//     return 0;
// }






// #include <stdio.h>

// int main () 
// {
//     float phy, chem, math, eng, avg;
    
//     printf("Enter marks of Physics: ");
//     scanf("%f" , &phy);

//     printf("Enter marks of Math: ");
//     scanf("%f" , &math);

//     printf("Enter marks of Chemistry: ");
//     scanf("%f" , &chem);

//     printf("Enter marks of english: ");
//     scanf("%f" , eng);

//    printf("Total marks: %f\n" , phy + chem + math + eng);
   
//   avg = (phy + chem + math + eng)/4.0;

//   printf("Average marks : %.2lf\n" , avg);
  
// return 0;
// }







// # include <stdio.h>

// int main()
// {
//   char operator;
//   double num1, num2, result;

//   printf("Enter Your Operartor ( + ): ");
//   scanf ("%c \n" , &operator);

//   printf("Ente your First Number: ");
//   scanf("%lf\n" , &num1);

//   printf("Enter your second Number: ");
//   scanf("%lf" , &num2);

// if (operator == '+')
// {
//   result = num1 / num2;
//   printf("Your Result is: %lf" , result);
// }
// else{
//   printf("Error because you enter Wrong Values");
// }
//   return 0;
// }
