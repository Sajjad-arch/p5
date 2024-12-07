/*Write a program in C that calculates total monthly salary of a person given that the person gets N as
basic salary in addition to 20% of basic as house rent and 10% of basic as conveyance allowance.
Unfortunately, there is also 5% tax deduction as well. Consider N as a floating-point value provided by
the user.*/




#include <stdio.h>


int main (void)


{
    float T, N, H, A, Total;

     printf("Enter the value of N :");

     scanf("%f", &N);

     H=.2*N;
     A=.1*N;

     Total=((H+A+N));
      T=.05*Total;

     printf("The total salary of a person %f :", Total-T);





    return 0;
}
