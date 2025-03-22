#include <stdio.h> 

int main(){

    float a, b, c, temp;

    scanf("%f %f %f", &a, &b, &c);

    if (b > a) { temp = a; a = b; b = temp; }
    if (c > a) { temp = a; a = c; c = temp; }
    if (c > b) { temp = b; b = c; c = temp; }

    if(a >= b+c){printf("NAO FORMA TRIANGULO\n");}
    else{
        if(a*a == b*b+c*c){printf("TRIANGULO RETANGULO\n");}
        if(a*a > b*b+c*c){printf("TRIANGULO OBTUSANGULO\n");}
        if(a*a < b*b+c*c){printf("TRIANGULO ACUTANGULO\n");}
        if(a == b && b == c){printf("TRIANGULO EQUILATERO\n");}
        else{
            if(a == b || b == c || c == a){printf("TRIANGULO ISOSCELES\n");}        
        }
    }


    return 0;
    
}
