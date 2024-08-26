#include <stdio.h>
#include <iostream>

int main(){
    int number1;
    int number2;
    int number3;
          printf("number1 :");
    scanf("%d",&number1);
          printf("number2 :");
    scanf("%d",&number2);
          printf("number3 :");
    scanf("%d",&number3);
    int average = (number1+number2+number3)/3;
    printf("Result : %d\n",&average);
    std::cout<<"the average is " << average <<std ::ends;
}