#include <stdio.h>
#include <math.h>
void computeHomeValue (void);

int main( void )
{
    computeHomeValue();
} 

void computeHomeValue (void) {
    double homeValue,homeSize,homePopularity;
    
    printf("Enter the popularity of the neighborhood:\n");
    scanf("%lf",&homePopularity);
    
    printf("Enter the size of the house:\n");
    scanf("%lf",&homeSize);
    
    homeValue = 10000 * ((pow(homeSize,2) + (pow(homePopularity,3)))) ;
    
    printf("the value of home:%lf",homeValue );
}
