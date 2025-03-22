#include <stdio.h>

int main(){

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a){
        printf("Perimetro = %.1lf\n", a + b + c);
    }else if{
        double area = (((a + b) * c)2);
        printf("Area = %.2lf\n", area );
    }

    return 0;
}