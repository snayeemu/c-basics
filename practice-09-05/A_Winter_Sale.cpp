#include <stdio.h>
#include <stdlib.h>

int main()
{
    int discountPercentage, priceOfTheTShirt;
    scanf("%d %d", &discountPercentage, &priceOfTheTShirt);

    float oririginal = (priceOfTheTShirt * 100.0) / (100.0 - discountPercentage);

    printf("%.2f", oririginal);

    return 0;

    /*
    discount = 20
    price = 80 
    original = ?
    price = original * (100 - discount) / 100 
        original * (100 - discount) = price * 100 
        original = (price * 100) / (100 - discount) 
    */
}