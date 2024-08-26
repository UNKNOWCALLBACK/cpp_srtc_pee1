
#include <iostream>
#include <stdio.h>
#include <conio.h>

int main() {
    float computer, acc, total, discount, netprice;

    printf("--------------------------------------------------\n");

    printf("\tEnter Computer (Baht): ");
    scanf("%f", &computer);

    printf("\tEnter Accessories (Baht): ");
    scanf("%f", &acc);

    std::cout << "\t Discount : 10% " << std::endl;

    total = computer + acc;
    discount = total * 0.10;

    printf("\tDiscount is: %.2f Baht\n", discount);

    netprice = total - discount;
    printf("\tThe NetPrice is: %.2f Baht\n", netprice); 
    printf("\tThank you\n");
    printf("--------------------------------------------------\n");

    getchar();
    return 0;
}
