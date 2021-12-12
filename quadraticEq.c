#include <stdio.h>
#include <math.h>
int main(){

    float a, b, c, D, z1, z2;
    printf("Enter the coefficient of x^2: ");
    scanf("%f", &a);
    printf("Enter the coefficient of x: ");
    scanf("%f", &b);
    printf("Enter the constant term: ");
    scanf("%f", &c);
    D = b * b - 4 * a * c;
    if(D>=0){
        z1 = ((-b) + (sqrt(D)))/(2*a);
        z2 = ((-b) - (sqrt(D)))/(2*a);
        printf("The quadratic equation: (%0.1f)x^2+(%0.1f)x+(%0.1f)\n", a, b, c);
        printf("Zeroes of the quadratic equation are %f and %f", z1, z2);
}
    else
        printf("Roots are imaginary.");
    return 0;
}
