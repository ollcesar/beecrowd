#include <stdio.h>

int main()
{

    double a, b, c;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    const double pi = 3.14159;

    /* a = b.h/2 */
    triangulo = (a*c)/2;
    /* a = pir^2 */
    circulo = pi*c*c;
    /* a = (B+b).h/2 */
    trapezio = ((a+b)*c)/2;
    /* a = b*b */
    quadrado = b*b;
    /* a = b.h */
    retangulo = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    
    return 0;
}