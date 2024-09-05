//program to swap 2 variables without the use of any third variable


#include <stdio.h>
void main()
{
    int a,b;
    printf ("enter two variables");
    scanf ("%d %d", &a, &b);  //say. a=5, b= 9

    a+=b;                   //a ==>a+b ==>14
    b= a-b;                 //b ==> a(new) - b ==> [a(original) + b] - b ==> b==>a(original)
    a= a-b;                 //a ==> a(new) - b (new) ==> [a(original)+ b(original)] - [a(original)] a==>b(original)

    
}