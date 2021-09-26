#include<stdio.h>
 int main()

 {
   float x, y;
   char operator;

     printf("\n :::::::::: Welcome to My Mini Project of 'Simple Calculator' :::::::::: \n");

     printf("\n\n Enter any operator(+, - *, /) : ");
     scanf("%c", &operator);

     printf("\n Enter 1st values : ");
     scanf("%f", &x);

     printf("\n Enter 2nd values : ");
     scanf("%f", &y);

     switch (operator)
     {
         case '+' :

        printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
        printf("\n (%.2f) + (%.2f) = %.3f\n", x,y, x+y);
        printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
        break;




     case '-' :

        printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
        printf("\n (%.2f) - (%.2f) = %.3f\n", x,y, x-y);
        printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
        break;



     case '*' :

         printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
         printf("\n (%.2f) * (%.2f) = %.3f\n", x,y, x*y);
         printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
         break;



    case '/' :

         printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
         printf("\n (%.2f) / (%.2f) = %.3f\n", x,y, x/y);
         printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
         break;


    default :

         printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
         printf("\n Error ! Please Try Again. \n");
         printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");

     }




     printf("\n Created By-\n\n Md. Anas Mondol\n ID : 1935202011\n Batch : 52-(A)\n Dept. of CSE \n City University of Bangladesh\n");
     printf("\n..................................................\n");

 return 0;
 }
