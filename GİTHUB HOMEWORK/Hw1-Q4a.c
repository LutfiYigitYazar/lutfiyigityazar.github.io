#include <stdio.h>
#include <math.h>
int computeHomeValue(int popularity, int size);
int main(void) {
    double homeValue, size, popularity;
    printf("Enter the popularity of the neighborhood:\n");
    scanf("%lf", &popularity);
    
    printf("Enter the size of the house\n");
    scanf("%lf", &size);
    homeValue = computeHomeValue(popularity, size);
    printf("The value of the home: %lf", homeValue);
} 
int computeHomeValue(int popularity, int size) {
    int homeValue;
    homeValue = 10000 * ((pow(size, 2) + (pow(popularity, 3))));
    return(homeValue);
}
