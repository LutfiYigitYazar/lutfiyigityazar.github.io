#include <stdio.h>
#include <math.h>

int main() {
    double popularity,size,homeValue;
    printf("Enter the popularity of the neighborhood: ");
    scanf("%lf", &popularity);

    printf("Enter the size of the house: ");
    scanf("%lf", &size);

    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;

    printf("The value of the home is: %lf TL\n", homeValue);

    return 0;
}


